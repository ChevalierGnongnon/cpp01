/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:10:58 by chhoflac          #+#    #+#             */
/*   Updated: 2025/02/24 11:52:07 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(Weapon &Weapon){
	this->weapon = Weapon;
	this->name = name;
}

HumanA::HumanA(std::string name, Weapon &Weapon){
	this->weapon = Weapon;
	this->name = name;
}

HumanA::~HumanA(){
	std::cout << this->name << "is dead" << std::endl;
}

std::string HumanA::getName(){
	return (this->name);
}

Weapon &HumanA::getWeapon(){
	return (this->weapon);
}

void HumanA::setName(std::string name){
	this->name = name;
}

void HumanA::setWeapon(Weapon &Weapon){
	this->weapon = weapon;
}

void HumanA::attack(){
	std::cout << this->name << "attacks with their" << this->weapon.getType() << std::endl;
}