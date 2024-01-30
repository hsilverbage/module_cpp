/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsilverb <hsilverb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:31:13 by hsilverb          #+#    #+#             */
/*   Updated: 2024/01/30 13:31:14 by hsilverb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <Weapon.hpp>

class	HumanA {

	public :

		HumanA(std::string name, Weapon& weapon);
		~HumanA();

		void	attack() const;

	private :
		std::string _name;
		Weapon&		_weapon;

};

#endif
