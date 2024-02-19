#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Pardon Form", 25, 5)
{
	this->_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rhs) : AForm("Presidential Pardon Form", 25, 5)
{
	*this = rhs;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	if (this != &rhs)
	{
		this->_target = rhs._target;
		this->_signed = rhs._signed;
	}
	return (*this);

}

bool	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	try
	{
		if (!this->_signed)
			throw AForm::NotSignedException();
		if (executor.getGrade() >= this->_gradeToExec)
			throw AForm::GradeTooLowException();
	}
	catch (const AForm::NotSignedException &e)
	{
		std::cout << e.what() << std::endl;
		return (false);
	}
	catch (const AForm::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
		return (false);
	}
	std::cout << this->_target  << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	return (true);
}
