/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <hsilverb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:51:48 by hsilverb          #+#    #+#             */
/*   Updated: 2024/01/30 13:51:49 by hsilverb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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
