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

const char* Intern::FileNotFundException::what() const throw()
{
	return ("The Intern can't find the file name asked by the bureaucrat and gives up");
}

AForm*	Intern::makeForm(std::string name, std::string target)
{
	int i;

	for (i = 0; i < 3; i++)
	{
		if (name == _files[i])
		{
			std::cout << "Intern creates" << name << std::endl;
			break;
		}
	}
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
	return (NULL);
}
