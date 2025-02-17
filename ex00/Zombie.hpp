/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 10:36:28 by chhoflac          #+#    #+#             */
/*   Updated: 2025/02/17 10:52:59 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
class Zombie {
	private :
		std::string name;
	public :
		void 	announce();
		Zombie *newZombie(std::string name);
		void	randomChump(std::string name);
	Zombie();
	~Zombie();
};

#endif