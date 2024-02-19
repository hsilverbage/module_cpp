#ifndef PRESIDENTIALPARDONFORM_HPP
#define	PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public :

		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &rhs);
		PresidentialPardonForm&	operator=(const PresidentialPardonForm &rhs);

		virtual bool	execute(Bureaucrat const & executor) const;
};

#endif
