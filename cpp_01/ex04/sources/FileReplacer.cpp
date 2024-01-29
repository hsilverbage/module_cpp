#include "FileReplacer.hpp"
#include <string>

FileReplacer::FileReplacer(std::string infile) : _infile(infile)
{
	this->_outfile = this->_infile + ".replace";
}

FileReplacer::~FileReplacer()
{

}

void	FileReplacer::replaceFile(std::string s1, std::string s2) const
{
	std::ifstream		infile;
	std::ofstream		outfile;
	std::string			line;

	infile.open(this->_infile);
	outfile.open(this->_outfile);

	if (infile.is_open() && outfile.is_open())
	{
		while (std::getline(infile, line))
		{
			size_t	pos = line.find(s1);
			if (pos != std::string::npos)
			{
				do
				{
					line.erase(pos, s1.length());
					line.insert(pos, s2);
					pos = line.find(s1);
				}
				while (pos != std::string::npos);
			}
			outfile << line << std::endl;
		}
	}
	else
	{
		std::cout << "Error : Cannot open file" << std::endl;
	}

	infile.close();
	outfile.close();
}
