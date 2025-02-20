/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:11:22 by chhoflac          #+#    #+#             */
/*   Updated: 2025/02/20 13:26:09 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){
	
}

Weapon::~Weapon(){
	
}

std::string Weapon::getType(){
	return (this->type);
}

void Weapon::setType(std::string type){
	this->type = type;
}
