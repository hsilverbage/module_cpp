#include "Intern.hpp"

Intern::Intern()
{
	this->_files[0] = "ShrubberyCreationForm";
	this->_files[1] = "RobotomyRequestForm";
	this->_files[2] = "PresidentialPardonForm";
}

Intern::~Intern()
{

}

Intern::Intern(const Intern& rhs)
{
	*this = rhs;
}

Intern&	Intern::operator=(const Intern &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 3; i++)
			this->_files[i] = rhs._files[i];
	}
	return (*this);
}

AForm*	Intern::makeForm(std::string name, std::string target)
{
	AForm* form = NULL;
	int i;

	for (i = 0; i < 3; i++)
	{
		if (name == _files[i])
		{
			std::cout << "Intern creates" << name << std::endl;
			break;
		}
	}
	std::cout << i << std::endl;
	try
	{
		switch (i)
		{
			case 0 :
				return (new ShrubberyCreationForm(target));
			case 1 :
				return (new RobotomyRequestForm(target));
			case 2 :
				return (new PresidentialPardonForm(target));
			default :
				throw Intern::FileNotFundException();
		}
	}
	catch (const FileNotFundException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (form);
}
