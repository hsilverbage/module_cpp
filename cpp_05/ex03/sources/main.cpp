#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Bureaucrat	fry("fry", 1);
	Intern		SexyIntern;
	AForm		*form;

	try
	{
		form = SexyIntern.makeForm("RobotomyRequestForm", "Bender");
		fry.signAForm(*form);
		fry.executeForm(*form);
		delete(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		form = SexyIntern.makeForm("fake form", "faky");
		delete(form);
	}
	catch(const Intern::FileNotFundException &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
