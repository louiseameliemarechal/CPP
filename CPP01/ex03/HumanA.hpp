/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarecha <lmarecha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 15:16:29 by lmarecha          #+#    #+#             */
/*   Updated: 2022/08/16 12:40:47 by louisea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class HumanA {

	public :

		HumanA(std::string _name, Weapon& type);
		~HumanA(void);
		void		attack();

	private :

		std::string	_name;
		Weapon&		_type;

};
