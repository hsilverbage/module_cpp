#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Request Form", 72, 45)
{
	this->_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs) : AForm("Robotomy Request Form", 72, 45)
{
	*this = rhs;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	if (this != &rhs)
	{
		this->_target = rhs._target;
		this->_signed = rhs._signed;
	}
	return (*this);
}

bool	RobotomyRequestForm::execute(Bureaucrat const & executor) const
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
	int	rand;

	srand(time(NULL));
	rand = std::rand();
	std::cout << "*Makes some drilling noises*" << std::endl;
	if (rand % 2 == 0)
		std::cout << this->_target << " has been Robotomised successfully" << std::endl;
	else
		std::cout << "the robotomy failed" << std::endl;
	return (true);
}
