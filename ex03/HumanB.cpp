/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:11:05 by chhoflac          #+#    #+#             */
/*   Updated: 2025/02/24 12:31:33 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->name = name;
}

HumanB::~HumanB(){
	std::cout << this->name << "is dead" << std::endl;
}

std::string HumanB::getName(){
	return (this->name);
}

Weapon &HumanB::getWeapon(){
	return (this->weapon);
}

void HumanB::setName(std::string name){
	this->name = name;
}

void HumanB::setWeapon(Weapon &Weapon){
	this->name = name;
}

void HumanB::attack(){
	std::cout << this->name << "attacks with their" << this->weapon.getType() << std::endl; 
}