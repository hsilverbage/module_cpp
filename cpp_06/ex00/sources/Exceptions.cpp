#include "Exceptions.hpp"

const char*	EmptyArg::what() const throw()
{
	return ("Error : the argument is empty");
}

const char*	WrongNbArg::what() const throw()
{
	return ("Error : wrong number of arguments");
}


