/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 11:34:17 by opopov            #+#    #+#             */
/*   Updated: 2025/09/05 13:50:50 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():
	name("Peter"), health_p(10), energy_p(10), attack_p(0)
{
	std::cout << "ClapTrap Peter constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name):
	name(name), health_p(10), energy_p(10), attack_p(0)
{
	std::cout << "ClapTrap " << name << " constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (energy_p <= 0)
	{
		std::cout << "Can't attack if your energy below (or equal) zero" << std::endl;
		return;
	}
	else if (health_p <= 0)
	{
		std::cout << "You're dead man..." << std::endl;
		return;
	}
	std::cout << name << " attacks " << target << ", causing " << attack_p
		<< " points of damage!" << std::endl;
	energy_p--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if ((int)amount >= health_p && health_p > 0)
		std::cout << name << " took damage and got killed" << std::endl;
	else if (health_p <= 0)
		std::cout << name << " is already dead! Stop hitting the corpse" << std::endl;
	else
		std::cout << name << " got hit and loose " << amount << " health points" << std::endl;
	health_p -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energy_p <= 0)
	{
		std::cout << "Can't repair armor if your energy below (or equal) zero" << std::endl;
		return;
	}
	else if (health_p <= 0)
	{
		std::cout << "We're not in the Walking dead movie... You can't rise from the dead!" << std::endl;
		return;
	}
	else
		std::cout << name << " repaired his armor and got " << amount << " health points"<< std::endl;
	health_p += amount;
	energy_p--;
}
