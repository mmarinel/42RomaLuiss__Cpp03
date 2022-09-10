/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:44:14 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/10 17:29:01 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

int	main( void )
{
	FragTrap	usa("USA");
	ScavTrap	russia("Rossija");

	std::cout << std::endl;

	russia.beRepaired(usa.getAttackDamage());
	usa.attack(russia.getName());
	russia.takeDamage(usa.getAttackDamage());
	russia.beRepaired(usa.getAttackDamage());
	russia.beRepaired(100);
	usa.attack(russia.getName());
	russia.takeDamage(usa.getAttackDamage());

	russia.attack(usa.getName());
	usa.takeDamage(russia.getAttackDamage());
	russia.attack(usa.getName());
	usa.takeDamage(russia.getAttackDamage());
	russia.attack(usa.getName());
	usa.takeDamage(russia.getAttackDamage());
	russia.attack(usa.getName());
	usa.takeDamage(russia.getAttackDamage());
	russia.attack(usa.getName());
	usa.takeDamage(russia.getAttackDamage());
	usa.attack(russia.getName());

	std::cout << std::endl;
	russia.guardGate();
	std::cout << std::endl;
	return 0;
}
