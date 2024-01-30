/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <hsilverb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:31:18 by hsilverb          #+#    #+#             */
/*   Updated: 2024/01/30 16:43:21 by hsilverb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {

	public:

		Weapon();
		Weapon(std::string type);
		~Weapon();

		void				setType(std::string type);
		const std::string&	getType() const;

	private:
		std::string	_type;
};

#endif
