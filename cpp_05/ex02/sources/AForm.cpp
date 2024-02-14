#include "AForm.hpp"

AForm::AForm()
{
	this->_signed = false;
	// try
	// {
	// 	if (_gradeToSign < 1 || _gradeToExec < 1)
	// 		throw AForm::GradeTooHighException();
	// 	if (_gradeToSign > 150 || _gradeToExec > 150)
	// 		throw AForm::GradeTooLowException();
	// }
	// catch (const GradeTooHighException &e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
	// catch (const GradeTooLowException &e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
}

AForm::~AForm()
{

}

AForm::AForm(const AForm &rhs) : _gradeToSign(100), _gradeToExec(50), _name("Stupid AForm")
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
	try
	{
		if (src.getGrade() <= this->getGradeToSign())
		{
			std::cout << src.getName() << " signed " << this->_name << std::endl;
			this->_signed = true;
		}
		else
			throw GradeTooLowException();
	}
	catch (const AForm::GradeTooLowException & e)
	{
		std::cerr << e.what() << std::endl;
	}
}

std::ostream&	operator<<(std::ostream& os, const AForm &rhs)
{
	os << "The " << rhs.getName() << " AForm needs a grade " << rhs.getGradeToSign() << " to be signed and a grade " << rhs.getGradeToExec() << " in order to execute it. ";
	if (rhs.getSigned())
		os << "The AForm is signed" << std::endl;
	else
		os << "The AForm is not signed yet." << std::endl;
	return (os);
}
