#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat	Tom("Tom", 1);
	Bureaucrat	Bob("Bob", 75);
	Bureaucrat	Joe("Joe", 150);
	Form		Form("contrat", 100, 50);

	std::cout << Tom;
	std::cout << Bob;
	std::cout << Joe;
	std::cout << Form;

	Joe.signForm(Form);
	Bob.signForm(Form);
	Tom.signForm(Form);

	std::cout << Form;

	return (0);
}
