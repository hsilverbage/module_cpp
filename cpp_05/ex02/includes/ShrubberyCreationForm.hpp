#ifndef	SHRUBBERYCREATIONFORM_HPP
#define	SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class	ShrubberyCreationForm : public AForm
{
	public :

		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &rhs);
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm &rhs);

		virtual bool	execute(Bureaucrat const & executor) const;
};

#endif
