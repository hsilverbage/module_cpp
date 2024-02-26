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


bool	BitcoinExchange::parse_input(std::ifstream& input)
{
	std::string	line;
	std::string	date;
	// long		value;

	while (std::getline(input, line))
	{
		if (line.find('|') == std::string::npos)
		{
			std::cerr << "Error : missing the pipe separator" << std::endl;
			break;
		}
		for (unsigned long i = 0; i < line.find('|'); i++)
		{
			if (isdigit(line.at(i)))
			{
				date = line.substr(i, 10);
				break;
			}
			else if (line.at(i) != ' ' || line.at(i) != '\t')
			{
				std::cout << "Error 1: wrong date format -> YYYY-MM-DD" << std::endl;
				return (false);
			}
		}
		if (date.at(4) != '-' || date.at(7) != '-')
		{
			std::cerr << "Error 2 : wrong date format -> YYYY-MM-DD" << std::endl;
			return (false);
		}
		for (unsigned long i = 0; i < date.size(); i++)
		{
			if (i == 4 || i == 7)
				i++;
			if (!isdigit(date.at(i)))
			{
				std::cerr << "Error 3 : wrong date format -> YYYY-MM-DD" << date.size() << std::endl;
				return (false);
			}	
		}
		// _inputContainer[date] = value;
		std::cout << line << "\t\t date : " << date << std::endl;
	}
	return (true);
}

void	BitcoinExchange::exchange()
{
	std::ifstream	data("data.csv");
	std::ifstream	input(this->_input.c_str());

	if (!data.is_open() || !input.is_open())
		throw OpenException();
	parse_input(input);


	data.close();
	input.close();
}

const char*	BitcoinExchange::OpenException::what() const throw()
{
	return ("Error : open file was unsuccessful");
}
