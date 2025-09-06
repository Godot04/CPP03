/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 13:54:10 by opopov            #+#    #+#             */
/*   Updated: 2025/09/05 16:36:11 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("Arnold"), is_guarded(false)
{
	health_p = 100;
	energy_p = 50;
	attack_p = 20;
	std::cout << "ScavTrap Arnold constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name), is_guarded(false)
{
	health_p = 100;
	energy_p = 50;
	attack_p = 20;
	std::cout << "ScavTrap " << name << " constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (energy_p <= 0)
	{
		std::cout << "Can't attack if you're exhausted" << std::endl;
		return;
	}
	else if (health_p <= 0)
	{
		std::cout << "Stay low and don't get up..." << std::endl;
		return;
	}
	std::cout << name << " kicks " << target << " butt, dealing " << attack_p
		<< " damage" << std::endl;
	energy_p--;
}

void ScavTrap::guardGate()
{
	if (health_p <= 0)
		std::cout << name << " is dead! Stop disturbing his peace..." << std::endl;
	else if (is_guarded == true)
		std::cout << name << " is already guarded!" << std::endl;
	else
	{
		std::cout << name << " set his guard" << std::endl;
		is_guarded = true;
	}
}
