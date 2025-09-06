/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 10:38:07 by opopov            #+#    #+#             */
/*   Updated: 2025/09/06 11:10:39 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01/ex00/ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	private:
		int high_five_counter;
	public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		void highFivesGuys(void);
};
