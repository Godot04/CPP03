/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 10:38:09 by opopov            #+#    #+#             */
/*   Updated: 2025/09/06 11:28:40 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("Boris"), high_five_counter(0)
{
	health_p = 100;
	energy_p = 100;
	attack_p = 30;
	std::cout << "FragTrap Boris constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name), high_five_counter(0)
{
	health_p = 100;
	energy_p = 100;
	attack_p = 30;
	std::cout << "FragTrap " << name << " constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (high_five_counter == 0)
		std::cout << name << " extend his hand for High five!" << std::endl;
	else if (high_five_counter % 2 != 0)
		std::cout << name << " smacked opponent in the face" << std::endl;
	else
		std::cout << name << ", again, extend his hand for High five!" << std::endl;
	high_five_counter++;
}
