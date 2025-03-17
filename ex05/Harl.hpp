/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhoflac <chhoflac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 14:05:09 by chhoflac          #+#    #+#             */
/*   Updated: 2025/03/17 14:34:50 by chhoflac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Harl{
	private :
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public :
		void	complain(std::string level);
};