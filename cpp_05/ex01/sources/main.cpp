#include "Bureaucrat.hpp"
#include "AForm.hpp"

int	main(void)
{
	Bureaucrat	Tom("Tom", 1);
	Bureaucrat	Bob("Bob", 75);
	Bureaucrat	Joe("Joe", 150);
	AForm		AForm("contrat", 100, 50);

	std::cout << Tom;
	std::cout << Bob;
	std::cout << Joe;
	std::cout << AForm;

	Joe.signAForm(AForm);
	Bob.signAForm(AForm);
	Tom.signAForm(AForm);

	std::cout << AForm;

	return (0);
}
