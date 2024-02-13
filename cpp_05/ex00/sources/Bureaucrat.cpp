#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, unsigned int
grade) _grade(grade)
{

}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs)
{
	*this = rhs;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &rhs)
{
	if (this != rhs)
	{

	}
	return (*this);
}

unsigned int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

const std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

void	incrementGrade()
{
	this->_grade -= 1;
}
void	decrementGrade()
{
	this->_grade += 1;
}

os::stream&	operator<<(os:stream &os, const Bureaucrat &rhs)
{
	os << this->_name << ", bureaucrat grade " << this->_grade << "." << std::endl;
}
