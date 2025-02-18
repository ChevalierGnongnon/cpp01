/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:19:04 by chhoflac          #+#    #+#             */
/*   Updated: 2025/02/18 12:53:43 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];
	int i;

	if (N <= 0)
	{
		std::cout << "Error: Number of zombies can't be negative." << std::endl;
		return (NULL);
	}
	for (i = 0; i < N; i++){
		horde[i].setName(name);
	}
	return (horde);
}