#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string file) : _input(file)
{

}

BitcoinExchange::~BitcoinExchange()
{

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &rhs)
{
	*this = rhs;
}

BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
	if (this != &rhs)
		this->_dataContainer = rhs._dataContainer;
	return (*this);
}


bool	BitcoinExchange::parse_input(std::string line)
{
	std::string	date;
	if (line.length() < 14 || line.at(4) != '-' || line.at(7) != '-')
	{
		std::cerr << DATE_ERR << "\t" << line << std::endl;
		return (false);
	}
	for (int i = 0; i < 10; i++)
	{
		if (i == 4 || i == 7)
			i++;
		if (!isdigit(line.at(i)))
		{
			std::cerr << DATE_ERR <<std::endl;
			return (false);
		}
	}
	if (line.at(10) != ' ' || line.at(11) != '|' || line.at(12) != ' ')
	{
		std::cerr << DATE_ERR << std::endl;
	}
	bool isFloat = false;
	for (unsigned long i = 13; i < line.length(); i++)
	{
		if (line.at(i) == '.')
		{
			i++;
			if (i == line.length() || isFloat == true || i == 14 )
			{
				std::cerr << VALUE_ERR << std::endl;
				return (false);
			}
			isFloat = true;
		}
		if (!isdigit(line.at(i)) )
		{
			std::cerr << VALUE_ERR << std::endl;
			return (false);
		}
	}
	long	value;
	std::stringstream ss(line.substr(13, line.length()));
	ss >> value;
	ss.str();
	if(ss.fail())
	{
		std::cerr << VALUE_ERR << std::endl;
		return (false);
	}
	if (value < 0 || value > 1000)
	{
		std::cerr << VALUE_ERR << std::endl;
		return (false);
	}
	if (!parse_date(line.substr(0, 10)))
		return (false);
	print_result(line.substr(0, 10), static_cast<float>(value));
	return (true);
}

bool	BitcoinExchange::parse_date(std::string date)
{
	std::stringstream	ss(date);
	int	year, month, day;
	char	sep;

	ss >> year >> sep >> month >> sep >> day;
	ss.str();
	if(ss.fail())
	{
		std::cerr << DATE_ERR << std::endl;
		return (false);
	}
	if (year < 2009 || year > 2022 || (year == 2022 && month > 3))
	{
		std::cerr << "Error : invalid year, data only goes from 2009 to March 2022" << std::endl;
		return (false);
	}
	if (month < 1 || month > 12)
	{
		std::cerr << "Error : invalid month" << std::endl;
		return (false);
	}
	if (day < 1 || day > 31)
	{
		std::cerr << "Error : invalid day" << std::endl;
		return (false);
	}
	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
	{
		std::cerr << "Error : invalid day" << std::endl;
		return (false);
	}
	if (month == 2)
	{
		if ((year % 4 == 0 && day > 29) || (year % 4 != 0 && day > 28))
		{
			std::cerr << "Error : invalid day" << std::endl;
			return (false);
		}
	}
	return (true);
}

void	BitcoinExchange::print_result(std::string date, float value)
{
	std::map<std::string, float>::iterator it = _dataContainer.lower_bound(date);

	if (date.compare(it->first) != 0 && it != _dataContainer.begin())
		it--;
	std::cout << std::fixed << std::setprecision(2) << date << " => " << value << " = " << (it->second * value) << std ::endl;
}

void	BitcoinExchange::fill_data_container()
{
	std::ifstream	data("data.csv");
	std::string	line;

	if (!data.is_open())
		throw OpenException();
	while (std::getline(data, line))
	{
		std::stringstream ss(line.substr(11, line.length()));
		float value;
		ss >> value;

		_dataContainer[line.substr(0, 10)] = value;
	}
	data.close();
}

void	BitcoinExchange::exchange()
{
	fill_data_container();

	std::ifstream	input(this->_input.c_str());
	std::string		line;

	if (!input.is_open())
		throw OpenException();
	while (std::getline(input, line))
		parse_input(line);
	input.close();
}

const char*	BitcoinExchange::OpenException::what() const throw()
{
	return ("Error : open file was unsuccessful");
}
