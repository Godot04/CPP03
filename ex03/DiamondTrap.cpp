/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 11:34:22 by opopov            #+#    #+#             */
/*   Updated: 2025/09/06 13:22:58 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("Patrick"), FragTrap(), ScavTrap()
{
	this->name = "Patrick_clap_name";
	this->health_p = 100;
	this->energy_p = 50;
	this->attack_p = 30;
	std::cout << "DiamondTrap Patrick_clap_name constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap()
{
	this->name = name;
	this->health_p = 100;
	this->energy_p = 50;
	this->attack_p = 30;
	std::cout << "DiamondTrap " << name << " constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << name << " destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "Who am I?... " << this->name << " or "
		<< ScavTrap::ClapTrap::name << "?..." << std::endl;
}
