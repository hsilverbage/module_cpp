#ifndef	SHRUBBERYCREATIONFORM
#define	SHRUBBERYCREATIONFORM

#include "AForm.hpp"

class	ShrubberyCreationForm : public AForm
{
	public :

		ShrubberyCreationForm();
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &rhs);
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm &rhs);

		virtual void		beSigned(Bureaucrat &src);

	private :

};

#endif
