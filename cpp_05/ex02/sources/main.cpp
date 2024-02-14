#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	Bureaucrat	Tom("Tom", 1);
	Bureaucrat	Bob("Bob", 75);
	Bureaucrat	Joe("Joe", 150);

	std::cout << Tom;
	std::cout << Bob;
	std::cout << Joe;

	PresidentialPardonForm	President;
	RobotomyRequestForm		Robot;
	ShrubberyCreationForm	Shrub;

	return (0);
}
