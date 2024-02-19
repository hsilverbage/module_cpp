#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(std::string arg) : _arg(arg), _sign(false)
{

}

ScalarConverter::~ScalarConverter()
{

}

ScalarConverter::ScalarConverter(const ScalarConverter &rhs)
{
	*this = rhs;
}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter &rhs)
{
	if (this != &rhs)
		this->_arg = rhs._arg;
	return (*this);
}

int	ScalarConverter::getType() const
{
	return (this->_type);
}

bool	ScalarConverter::parsing()
{
	bool	f = false;
	bool	dot = false;

	if (_arg.length() == 1)
	{
		if (_arg[0] >= '0' && _arg[0] <= '9')
		{
			this->_type = INT;
			return (true);
		}
		if (_arg[0] >= 32 && _arg[0] <= 126)
		{
			this->_type = CHAR;
			return (true);
		}
		throw InvalidInput();
	}
	if (_arg == "-inff" || _arg == "+inff" || _arg == "-inf" || _arg == "+inf" || _arg == "nan")
	{
		this->_type = SCIENCE;
		return (true);
	}
	for (int i = 0; i < _arg.length(); i++)
	{
		if (_arg[0] == '-' || _arg[0] == '+')
		{
			this->_sign = true;
			i++;
		}
		if (_arg[i] < '0' || _arg[i] > '9')
		{
			if (_arg[i] == '.' && dot == false)
				dot = true;
			else if (_arg[i] == 'f' && f == false)
				f = true;
			else
				throw InvalidInput();
		}
		if (i + 1 == _arg.length())
		{
			if (f)
				this->_type = FLOAT;
			else if (dot)
				this->_type = DOUBLE;
			else
				this->_type = INT;
			return (true);
		}
	}
	throw InvalidInput();
	return (false);
}

void	ScalarConverter::convertToChar() const
{
	if (this->_type == CHAR)
		std::cout << "Char : " << this->_arg << std::endl;
	if (this->_type == SCIENCE)
		std::cout << "Char : impossible" << std::endl;
	if (this->_type == INT)
	{
		int nb = std::stoi(this->_arg);
		char output = nb + '0';
		std::cout << "Char : " << output << std::endl;
	}
}

void	ScalarConverter::convertToInt() const
{
	if (this->_type == INT)
	{
		try
		{
			int nb = std::stoi(this->_arg);
			std::cout << "Int : " << nb <<std::endl;
		}
		catch (const std::out_of_range &e)
		{
			std::cerr << "Int : impossible" << std::endl;
		}
	}
	if (this->_type == SCIENCE)
		std::cout << "Int : impossible" << std::endl;
	if (this->_type == CHAR)
	{

	}
}

void	ScalarConverter::convertToFloat() const
{

}

void	ScalarConverter::convertToDouble() const
{

}

void	ScalarConverter::printResult() const
{
	this->convertToChar();
	this->convertToInt();
	this->convertToFloat();
	this->convertToDouble();
}

const char*	ScalarConverter::InvalidInput::what() const throw()
{
	return ("Error : invalid input");
}
