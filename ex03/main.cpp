/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 11:34:05 by opopov            #+#    #+#             */
/*   Updated: 2025/09/06 13:20:28 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap Jim("Jim");

	std::cout << "\n=== Attacks (override)! ===" << std::endl;
	Jim.attack("Dummy");

	std::cout << "\n=== Taking damage! ===" << std::endl;
	Jim.takeDamage(50);

	std::cout << "\n=== Repairing armor! ===" << std::endl;
	Jim.beRepaired(20);

	std::cout << "\n=== Highing five! ===" << std::endl;
	Jim.highFivesGuys();
	Jim.highFivesGuys();
	Jim.highFivesGuys();

	std::cout << "\n=== Guarding! ===" << std::endl;
	Jim.guardGate();
	Jim.guardGate();

	std::cout << "\n=== Existential question asking! ===" << std::endl;
	Jim.whoAmI();
	return (0);
}
