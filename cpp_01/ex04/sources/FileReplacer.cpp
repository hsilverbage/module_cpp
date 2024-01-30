/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <hsilverb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:51:45 by hsilverb          #+#    #+#             */
/*   Updated: 2024/01/30 17:02:35 by hsilverb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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

	infile.open(this->_infile.c_str());
	outfile.open(this->_outfile.c_str());

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
					pos = line.find(s1, (pos + s2.length()));
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
