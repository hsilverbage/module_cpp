#ifndef	ROBOTOMYREQUESTFORM
#define	ROBOTOMYREQUESTFORM

#include "AForm.hpp"

class	RobotomyRequestForm  : public AForm
{
	public :

		RobotomyRequestForm();
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &rhs);
		RobotomyRequestForm&	operator=(const RobotomyRequestForm &rhs);

		virtual void		beSigned(Bureaucrat &src);

	private :

};

#endif
