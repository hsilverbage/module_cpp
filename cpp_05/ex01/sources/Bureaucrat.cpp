#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, size_t grade) : _name(name), _grade(grade)
{
	try
	{
		if (this->_grade < 1)
			throw Bureaucrat::GradeTooHighException();
		if (this->_grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch (const GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (const GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
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
	if (this != &rhs)
		this->_grade = rhs._grade;
	return (*this);
}

size_t	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

const std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

void	Bureaucrat::incrementGrade()
{
	try
	{
		if (this->_grade > 1)
			this->_grade -= 1;
		else
			throw Bureaucrat::GradeTooHighException();
	}
	catch (const Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
void	Bureaucrat::decrementGrade()
{
	try
	{
		if (this->_grade < 150)
			this->_grade += 1;
		else
			throw Bureaucrat::GradeTooLowException();
	}
	catch (const Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Bureaucrat::signForm(Form& src)
{
	if (!src.getSigned())
		src.beSigned(*this);
	else
		std::cout << this->_name << " couldn't sign " << src.getName() << " because the Form is already signed" << std::endl;
}

std::ostream&	operator<<(std::ostream &os, const Bureaucrat &rhs)
{
	os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
	return (os);
}
