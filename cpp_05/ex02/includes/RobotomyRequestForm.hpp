#ifndef	ROBOTOMYREQUESTFORM_HPP
#define	ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class	RobotomyRequestForm  : public AForm
{
	public :

		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &rhs);
		RobotomyRequestForm&	operator=(const RobotomyRequestForm &rhs);

		virtual bool	execute(Bureaucrat const & executor) const;
};

#endif
