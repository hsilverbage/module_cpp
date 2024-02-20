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

std::string	ScalarConverter::getArg() const
{
	return (this->_arg);
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
		if (_arg[0] <= 127)
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
			{
				if (!dot)
					throw InvalidInput();
				this->_type = FLOAT;
			}
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

void	ScalarConverter::convertChar() const
{
	char	c;
	c = _arg[0];

	int checkInput = c;
	if (checkInput < 0 || checkInput > 127)
		std::cout << "char: Non ASCII" << std::endl;
	else if (c < 32 || c > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void	ScalarConverter::convertInt() const
{
	std::stringstream ss(_arg);
	int i;
	ss >> i;
	ss.str();

	if(ss.fail())
	{
		std::cerr << "Invalid input" << std::endl;
		return ;
	}
	if (i < 0 || i > 127)
		std::cout << "char: Non ASCII" << std::endl;
	else if (i < 32 || i > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}


void	ScalarConverter::convertFloat() const
{
	std::string	arg = getArg();
	arg.erase(_arg.size() - 1);
	std::stringstream ss(_arg);
	float f;
	ss >> f;

	if(ss.fail())
		throw InvalidInput();
	int checkInput = static_cast<int>(f);
	if (checkInput < 0 || checkInput > 127)
		std::cout << "char: Non ASCII" << std::endl;
	else if (checkInput < 32 || checkInput > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(checkInput) << "'" << std::endl;
	std::cout << "int: " << checkInput << std::endl;
	if((checkInput - f) == 0)
		std::cout << "float: " << f << ".0f" << std::endl;
	else
		std::cout << "float: " << f << "f" << std::endl;
	if((checkInput - f) == 0)
		std::cout << "double: " << static_cast<double>(f) << ".0" << std::endl;
	else
		std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void	ScalarConverter::convertDouble() const
{
	std::stringstream	ss(_arg);
	double	d;
	ss >> d;

	if(ss.fail())
		throw InvalidInput();
	int checkInput = static_cast<int>(d);
	if (checkInput < 0 || checkInput > 127)
		std::cout << "char: Non ASCII" << std::endl;
	else if (checkInput < 32 || checkInput > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(checkInput) << "'" << std::endl;
	std::cout << "int: " << checkInput << std::endl;
	if((checkInput - d) == 0)
		std::cout << "float: " << static_cast<float>(d) << ".0f" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	if((checkInput - d) == 0)
		std::cout << "double: " << d << ".0" << std::endl;
	else
		std::cout << "double: " << d << std::endl;
}

void	ScalarConverter::convertScience() const
{
	std::string	arg = getArg();

	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (arg.length() == 5)
	{
		std::cout << "float: " << this->_arg << std::endl;
		arg.erase(arg.size() - 1);
		std::cout << "double: " << arg << std::endl;
	}
	else
	{
		std::cout << "float: " << this->_arg << "f" << std::endl;
		std::cout << "double: " << this->_arg << std::endl;
	}

}

void	ScalarConverter::printResult() const
{
	switch (_type)
	{
		case	CHAR :
			convertChar();
			break;
		case	INT :
			convertInt();
			break;
		case	DOUBLE :
			convertDouble();
			break;
		case	FLOAT :
			convertFloat();
			break;
		case	SCIENCE :
			convertScience();
			break;
		default :
			throw InvalidInput();
	}
}

const char*	ScalarConverter::InvalidInput::what() const throw()
{
	return ("Error : invalid input");
}
