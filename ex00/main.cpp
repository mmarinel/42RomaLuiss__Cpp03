/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:44:14 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/10 12:59:33 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main( void )
{
	ClapTrap	usa("USA");
	ClapTrap	russia("Rossija");

	std::cout << std::endl;

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
	return 0;
}
