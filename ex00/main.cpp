/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 11:34:05 by opopov            #+#    #+#             */
/*   Updated: 2025/09/05 16:24:44 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap Peter("Peter");
	ClapTrap Bob("Bob");

	std::cout << "\n=== Attacks! ===" << std::endl;
	Peter.attack("Bob");
	Bob.attack("Peter");

	std::cout << "\n=== Taking damage! ===" << std::endl;
	Peter.takeDamage(5);
	Bob.takeDamage(2);

	std::cout << "\n=== Repairing! ===" << std::endl;
	Peter.beRepaired(2);
	Bob.beRepaired(1);

	std::cout << "\n=== Draining energy! ===" << std::endl;
	for (int i = 0; i < 10; i++)
		Peter.attack("Dummy");
	Peter.beRepaired(2);

	std::cout << "\n=== Playing with Death! ===" << std::endl;
	Bob.takeDamage(20);
	Bob.takeDamage(1);
	Bob.attack("Dummy");
	Bob.beRepaired(5);
	return (0);
}
