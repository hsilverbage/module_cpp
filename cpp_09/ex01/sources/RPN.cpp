#include "RPN.hpp"

RPN::RPN(std::string arg) : _arg(arg)
{
}

RPN::~RPN()
{
}

RPN::RPN(const RPN &rhs) : _arg(rhs._arg)
{
	*this = rhs;
}

RPN&	RPN::operator=(const RPN &rhs)
{
	if (this != &rhs)
	{
		this->_arg = rhs._arg;
		this->_stack = rhs._stack;
	}
	return (*this);
}

bool	RPN::parsing()
{
	if (_arg.empty())
		return (false);
	if (_arg.length() < 5)
		return (false);
	if (_arg.find_first_not_of("0123456789 /*-+") != std::string::npos)
		return (false);
	if (_arg.find_first_of("/*-+") == std::string::npos)
		return (false);
	if (_arg.find_last_of("/*-+") < _arg.find_last_of("0123456789"))
		return (false);
	int	nb_checker = 0;
	for (unsigned long i = 0; i < _arg.length(); i++)
	{
		while (_arg.at(i) == ' ')
			i++;
		if (isdigit(_arg.at(i)))
		{
			nb_checker++;
			if (_arg.at(i + 1) != ' ')
				return (false);
		}
		if (_arg.find_first_of("/*-+") == i && nb_checker != 2)
			return (false);
		else if (nb_checker == 2)
			break;
	}
	nb_checker = 0;
	int op_checker = 0;
	for (unsigned long i = 0; i < _arg.length(); i++)
	{
		if (_arg.at(i) == ' ')
			i++;
		if (i == _arg.length())
			break;
		if (isdigit(_arg.at(i)))
		{
			nb_checker++;
			if (_arg.at(i + 1) != ' ')
				return (false);
		}
		if (_arg.at(i) == '*' || _arg.at(i) == '/' || _arg.at(i) == '+' || _arg.at(i) == '-')
		{
			op_checker++;
			if (i + 1 == _arg.length())
				break;
			if (_arg.at(i + 1) != ' ')
				return (false);
		}
	}
	if (nb_checker != op_checker + 1)
		return (false);
	return (true);
}

void	RPN::calculator()
{
	if (!parsing())
	{
		std::cerr << "Error" << std::endl;
	}
	else
	{
		for (unsigned long i = 0; i < _arg.length(); i++)
		{
			while (_arg.at(i) == ' ')
				i++;
			if (isdigit(_arg.at(i)))
				_stack.push(_arg.at(i) - '0');
			if (_arg.at(i) == '*')
			{
				int nb2 = _stack.top();
				_stack.pop();
				int nb1 = _stack.top();
				_stack.pop();
				int result = nb1 * nb2;
				_stack.push(result);
			}
			if (_arg.at(i) == '/')
			{
				int nb2 = _stack.top();
				_stack.pop();
				int nb1 = _stack.top();
				_stack.pop();
				if (nb2 == 0)
				{
					std::cerr << "Error : division by zero is impossible" << std::endl;
					return;
				}
				int result = nb1 / nb2;
				_stack.push(result);
			}
			if (_arg.at(i) == '+')
			{
				int nb2 = _stack.top();
				_stack.pop();
				int nb1 = _stack.top();
				_stack.pop();
				int result = nb1 + nb2;
				_stack.push(result);
			}
			if (_arg.at(i) == '-')
			{
				int nb2 = _stack.top();
				_stack.pop();
				int nb1 = _stack.top();
				_stack.pop();
				int result = nb1 - nb2;
				_stack.push(result);
			}
		}
		std::cout << _stack.top() << std::endl;
	}
}
