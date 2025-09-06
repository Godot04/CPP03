/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 11:34:05 by opopov            #+#    #+#             */
/*   Updated: 2025/09/05 16:35:57 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap Mike("Mike");

	std::cout << "\n=== Attacks (override)! ===" << std::endl;
	Mike.attack("Dummy");

	std::cout << "\n=== Taking damage! ===" << std::endl;
	Mike.takeDamage(50);

	std::cout << "\n=== Guarding! ===" << std::endl;
	Mike.guardGate();
	Mike.guardGate();

	std::cout << "\n=== Playing with death! ===" << std::endl;
	Mike.takeDamage(50);
	Mike.takeDamage(50);
	Mike.attack("Dummy");
	Mike.guardGate();
	return (0);
}
