#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	Bureaucrat	Tom("Tom", 1);
	Bureaucrat	Bob("Bob", 70);
	Bureaucrat	Joe("Joe", 150);

	// std::cout << Tom;
	// std::cout << Bob;
	// std::cout << Joe;

	// {
	// 	PresidentialPardonForm	President("Contract");

	// 	std::cout << President;
	// 	President.execute(Tom);
	// 	Bob.signAForm(President);
	// 	Tom.signAForm(President);
	// 	Joe.executeForm(President);
	// 	Tom.executeForm(President);
	// 	std::cout << President;
	// 	Tom.signAForm(President);
	// }
	// {
	// 	RobotomyRequestForm	Robot("Contract");

	// 	std::cout << Robot;
	// 	Robot.execute(Tom);
	// 	Joe.signAForm(Robot);
	// 	Bob.signAForm(Robot);
	// 	Tom.signAForm(Robot);
	// 	Joe.executeForm(Robot);
	// 	Tom.executeForm(Robot);
	// 	std::cout << Robot;
	// }
	{
		ShrubberyCreationForm	Shru("Contract");

		std::cout << Shru;
		Shru.execute(Tom);
		Joe.signAForm(Shru);
		Tom.signAForm(Shru);
		Joe.executeForm(Shru);
		Tom.executeForm(Shru);
		std::cout << Shru;
		Tom.signAForm(Shru);
	}

	return (0);
}
