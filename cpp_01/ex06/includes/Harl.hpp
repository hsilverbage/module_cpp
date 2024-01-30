/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <hsilverb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:57:17 by hsilverb          #+#    #+#             */
/*   Updated: 2024/01/30 13:57:18 by hsilverb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class	Harl {

	public:

		Harl();
		~Harl();

		void	complain(std::string level);

	private:

		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void	_error(void);
};

#endif
