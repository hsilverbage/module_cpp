#ifndef FILEREPLACER_HPP
#define FILEREPLACER_HPP

#include <iostream>
#include <fstream>


class	FileReplacer{

	public:
		FileReplacer(std::string infile);
		~FileReplacer();

		void	replaceFile(std::string s1, std::string s2) const;

	private:
		std::string	_infile;
		std::string	_outfile;
};

#endif
