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
	{
	
	}
	return (*this);
}


bool	BitcoinExchange::parse_line(std::string line)
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
	for (unsigned long i = 13; i < line.length(); i++)
	{
		if (!isdigit(line.at(i)))
		{
			std::cerr << VALUE_ERR << std::endl;
			return (false);
		}
	}
	date = line.substr(0, 10);

	long	value;

	std::stringstream ss(line.substr(13, line.length()));
	long longValue;
	ss >> longValue;
	ss.str();

	if(ss.fail())
	{
		std::cerr << DATE_ERR << std::endl;
		return (false);
	}
	value = longValue;
	std::cout << date << std::endl;

	return (true);
}

void	BitcoinExchange::exchange()
{
	std::ifstream	data("data.csv");
	std::ifstream	input(this->_input.c_str());
	std::string		line;

	if (!data.is_open() || !input.is_open())
		throw OpenException();
	while (std::getline(input, line))
	{
		parse_line(line); // if true than implement map and print the correct line
	}
	data.close();
	input.close();
}

const char*	BitcoinExchange::OpenException::what() const throw()
{
	return ("Error : open file was unsuccessful");
}
