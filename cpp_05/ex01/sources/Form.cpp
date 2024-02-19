#include "Form.hpp"

Form::Form(const std::string name, unsigned int gradeToSign, unsigned int gradeToExec) : _gradeToSign(gradeToSign), _gradeToExec(gradeToExec), _signed(false), _name(name)
{
	if (_gradeToSign < 1 || _gradeToExec < 1)
		throw Form::GradeTooHighException();
	if (_gradeToSign > 150 || _gradeToExec > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{

}

Form::Form(const Form &rhs) : _gradeToSign(100), _gradeToExec(50), _name("Stupid Form")
{
	*this = rhs;
}

Form&	Form::operator=(const Form &rhs)
{
	if (this != &rhs)
	{
		this->_signed = rhs._signed;
	}
	return (*this);
}

const std::string	Form::getName() const
{
	return (this->_name);
}

const unsigned int	Form::getGradeToSign() const
{
	return (this->_gradeToSign);
}

const unsigned int	Form::getGradeToExec() const
{
	return (this->_gradeToExec);
}

bool	Form::getSigned() const
{
	return (this->_signed);
}

void	Form::beSigned(Bureaucrat &src)
{
	if (src.getGrade() <= this->getGradeToSign() && getSigned() == false)
	{
		std::cout << src.getName() << " signed " << this->_name << std::endl;
		this->_signed = true;
	}

}

std::ostream&	operator<<(std::ostream& os, const Form &rhs)
{
	os << "The " << rhs.getName() << " Form needs a grade " << rhs.getGradeToSign() << " to be signed and a grade " << rhs.getGradeToExec() << " in order to execute it. ";
	if (rhs.getSigned())
		os << "The Form is signed" << std::endl;
	else
		os << "The Form is not signed yet." << std::endl;
	return (os);
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}
