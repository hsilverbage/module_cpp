#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	Tom("Tom", 1);
		Bureaucrat	Bob("Bob", 70);
		Bureaucrat	Joe("Joe", 150);

		std::cout << Tom;
		std::cout << Bob;
		std::cout << Joe;
		{
			std::cout << "\n\nTEST 1 - PRESIDENTIAL PARDON\n\n";
			PresidentialPardonForm	President("Contract");

			std::cout << President;
			President.execute(Tom);
			Bob.signAForm(President);
			Tom.signAForm(President);
			Joe.executeForm(President);
			Tom.executeForm(President);
			std::cout << President;
			Tom.signAForm(President);
		}
		{
			std::cout << "\n\nTEST 2 - ROBOTOMY REQUEST\n\n";
			RobotomyRequestForm	Robot("Contract");

			std::cout << Robot;
			Robot.execute(Tom);
			Joe.signAForm(Robot);
			Bob.signAForm(Robot);
			Tom.signAForm(Robot);
			Joe.executeForm(Robot);
			Tom.executeForm(Robot);
			std::cout << Robot;
		}
		{
			std::cout << "\n\nTEST 3 - SHRUBBERY CREATION\n\n";
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
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
