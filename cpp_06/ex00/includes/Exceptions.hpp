#ifndef	EXCEPTIONS_HPP
#define	EXCEPTIONS_HPP

#include <iostream>

class	EmptyArg : public std::exception
{
	virtual const char* what() const throw();
};

class	WrongNbArg : public std::exception
{
	virtual const char* what() const throw();
};

#endif
