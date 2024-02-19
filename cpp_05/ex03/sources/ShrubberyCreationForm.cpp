#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Creation Form", 145, 137)
{
	this->_target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs) : AForm("Shrubbery Creation Form", 145, 137)
{
	this->_target = rhs._target;
	*this = rhs;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	if (this != &rhs)
	{
		this->_target = rhs._target;
		this->_signed = rhs._signed;
	}
	return (*this);
}

bool	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (!this->_signed)
			throw AForm::NotSignedException();
		if (executor.getGrade() >= this->_gradeToExec)
			throw AForm::GradeTooLowException();
	}
	catch (const AForm::NotSignedException &e)
	{
		std::cout << e.what() << std::endl;
		return (false);
	}
	catch (const AForm::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
		return (false);
	}
	std::ofstream	file(this->_target + "_shrubbery");
	if (!file)
	{
		std::cout << "Error : " << this->_target << "_shrubbery file unsuccessfly created" << std::endl;
		return (false);
	}
	file << "                                                      ." << std::endl;
	file << "                                              .         ;" << std::endl;
	file << "                 .              .              ;%     ;;" << std::endl;
	file << "                   ,           ,                :;%  %;" << std::endl;
	file << "                    :         ;                   :;%;'     .," << std::endl;
	file << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
	file << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
	file << "              %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl;
	file << "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
	file << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
	file << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
	file << "                    `:%;.  :;bd%;          %;@%;'" << std::endl;
	file << "                      `@%:.  :;%.         ;@@%;'" << std::endl;
	file << "                        `@%.  `;@%.      ;@@%;" << std::endl;
	file << "                          `@%%. `@%%    ;@@%;" << std::endl;
	file << "                            ;@%. :@%%  %@@%;" << std::endl;
	file << "                              %@bd%%%bd%%:;" << std::endl;
	file << "                                #@%%%%%:;;" << std::endl;
	file << "                                %@@%%%::;" << std::endl;
	file << "                                %@@@%(o);  . '" << std::endl;
	file << "                                %@@@o%;:(.,'" << std::endl;
	file << "                            `.. %@@@o%::;" << std::endl;
	file << "                               `)@@@o%::;" << std::endl;
	file << "                                %@@(o)::;" << std::endl;
	file << "                               .%@@@@%::;" << std::endl;
	file << "                               ;%@@@@%::;." << std::endl;
	file << "                              ;%@@@@%%:;;;." << std::endl;
	file << "                          ...;%@@@@@%%:;;;;,.." << std::endl;
	file.close();
	return (true);
}
