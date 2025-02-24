/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:11:01 by chhoflac          #+#    #+#             */
/*   Updated: 2025/02/24 11:03:38 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA {
	private :
		std::string name;
		Weapon		weapon;
	public :
		std::string getName();
		Weapon		&getWeapon();
		void		setName(std::string name);
		void		setWeapon(Weapon &Weapon);
		void		attack();
	HumanA::HumanA(Weapon &Weapon);
	HumanA(std::string name, Weapon &Weapon);
	~HumanA();
};