/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:43:24 by lmarecha          #+#    #+#             */
/*   Updated: 2022/08/11 18:44:17 by lmarecha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <new>

class Zombie {

	public :

		Zombie(void);
		~Zombie(void);
		void		announce(void) const;
		void		setZombieName(std::string name);

	private :

		std::string	_name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);