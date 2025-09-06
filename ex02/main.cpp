/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 11:34:05 by opopov            #+#    #+#             */
/*   Updated: 2025/09/06 11:13:11 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap Bill("Bill");

	std::cout << "\n=== Attacks (override)! ===" << std::endl;
	Bill.attack("Dummy");

	std::cout << "\n=== Taking damage! ===" << std::endl;
	Bill.takeDamage(50);

	std::cout << "\n=== Repairing armor! ===" << std::endl;
	Bill.beRepaired(20);

	std::cout << "\n=== Highing five! ===" << std::endl;
	Bill.highFivesGuys();
	Bill.highFivesGuys();
	Bill.highFivesGuys();
	return (0);
}
