/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <hsilverb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:31:16 by hsilverb          #+#    #+#             */
/*   Updated: 2024/01/30 13:31:17 by hsilverb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <Weapon.hpp>
#include <cstdlib>

class HumanB {

	public :

		HumanB(std::string name);
		~HumanB();

		void	attack() const;
		void	setWeapon(Weapon& weapon);

	private :
		std::string _name;
		Weapon*	_weapon;
};

#endif
