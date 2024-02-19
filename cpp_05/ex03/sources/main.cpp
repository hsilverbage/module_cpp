#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	try
	{
		std::cout << "TEST 1 :\n\n";
		Intern		SexyIntern;
		AForm		*form;
		Bureaucrat	fry("fry", 1);

		form = SexyIntern.makeForm("RobotomyRequestForm", "Bender");
		fry.signAForm(*form);
		fry.executeForm(*form);
		delete form;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << '\n';
	}

	try
	{
		std::cout << "\n\nTEST 2 :\n\n";
		Intern		SexyIntern;
		AForm		*form;
		Bureaucrat	fry("fry", 1);

		form = SexyIntern.makeForm("fake form", "faky");
		fry.signAForm(*form);
		fry.executeForm(*form);
		delete form;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
