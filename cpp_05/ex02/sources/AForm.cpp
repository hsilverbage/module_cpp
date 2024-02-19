#include "AForm.hpp"

AForm::AForm(const std::string name, unsigned int gradeToSign, unsigned int gradeToExec) : _gradeToSign(gradeToSign), _gradeToExec(gradeToExec), _signed(false), _name(name)
{
	if (_gradeToSign < 1 || _gradeToExec < 1)
		throw AForm::GradeTooHighException();
	if (_gradeToSign > 150 || _gradeToExec > 150)
		throw AForm::GradeTooLowException();
}

AForm::~AForm()
{

}

AForm::AForm(const AForm &rhs) : _gradeToSign(rhs._gradeToSign), _gradeToExec(rhs._gradeToExec), _name(rhs._name)
{
	*this = rhs;
}

AForm&	AForm::operator=(const AForm &rhs)
{
	if (this != &rhs)
	{
		this->_signed = rhs._signed;
	}
	return (*this);
}

const std::string	AForm::getName() const
{
	return (this->_name);
}

const unsigned int	AForm::getGradeToSign() const
{
	return (this->_gradeToSign);
}

const unsigned int	AForm::getGradeToExec() const
{
	return (this->_gradeToExec);
}

bool	AForm::getSigned() const
{
	return (this->_signed);
}

void	AForm::beSigned(Bureaucrat &src)
{
	if (src.getGrade() <= this->getGradeToSign() && getSigned() == false)
	{
		std::cout << src.getName() << " signed " << this->_name << std::endl;
		this->_signed = true;
	}
}

std::ostream&	operator<<(std::ostream& os, const AForm &rhs)
{
	os << "The " << rhs.getName() << " needs a grade " << rhs.getGradeToSign() << " to be signed and a grade " << rhs.getGradeToExec() << " in order to execute it. ";
	if (rhs.getSigned())
		os << "The form is signed" << std::endl;
	else
		os << "The form is not signed yet." << std::endl;
	return (os);
}


const char*	AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char*	AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char*	AForm::NotSignedException::what() const throw()
{
	return ("Impossible to execute the form because its not signed yet");
}
