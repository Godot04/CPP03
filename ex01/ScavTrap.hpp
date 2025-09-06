/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 13:54:41 by opopov            #+#    #+#             */
/*   Updated: 2025/09/05 16:06:54 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex00/ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:
	bool is_guarded;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		void attack(const std::string& target);
		void guardGate();
};
