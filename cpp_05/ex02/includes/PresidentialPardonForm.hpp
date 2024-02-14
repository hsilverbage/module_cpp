#ifndef PRESIDENTIALPARDONFORM
#define	PRESIDENTIALPARDONFORM

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public :

		PresidentialPardonForm();
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &rhs);
		PresidentialPardonForm&	operator=(const PresidentialPardonForm &rhs);

		virtual void		beSigned(Bureaucrat &src);

	private :

};

#endif
