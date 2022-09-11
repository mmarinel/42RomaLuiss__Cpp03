/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:44:14 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/11 17:01:48 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

static void	showDiamondTrapInfo(const DiamondTrap& dTrap);
//* end of static declarations

int	main( void )
{
	FragTrap	usa("USA");
	DiamondTrap	russia("Rossija");

	std::cout << std::endl;

	showDiamondTrapInfo(russia);
	// russia.beRepaired(usa.getAttackDamage());
	// usa.attack(russia.getName());
	// russia.takeDamage(usa.getAttackDamage());
	// russia.beRepaired(usa.getAttackDamage());
	// russia.beRepaired(100);
	// usa.attack(russia.getName());
	// russia.takeDamage(usa.getAttackDamage());

	// russia.attack(usa.getName());
	// usa.takeDamage(russia.getAttackDamage());
	// russia.attack(usa.getName());
	// usa.takeDamage(russia.getAttackDamage());
	// russia.attack(usa.getName());
	// usa.takeDamage(russia.getAttackDamage());
	// russia.attack(usa.getName());
	// usa.takeDamage(russia.getAttackDamage());
	// russia.attack(usa.getName());
	// usa.takeDamage(russia.getAttackDamage());
	// usa.attack(russia.getName());

	// std::cout << std::endl;
	// russia.guardGate();
	// std::cout << std::endl;
	return 0;
}

static void	showDiamondTrapInfo(const DiamondTrap& dTrap)
{
	std::cout
		<< YELLOW << "DiamondTrap object infos" << std::endl
		<< "....................................................." << std::endl
		<< "name : " << dTrap.getName() << std::endl
		<< "....................................................." << std::endl
		<< "ClapTrap::name : " << dTrap.getClapName() << std::endl
		<< "....................................................." << std::endl
		<< "hit_points : " << dTrap.getHp() << std::endl
		<< "....................................................." << std::endl
		<< "energy_points : " << dTrap.getEp() << std::endl
		<< "....................................................." << std::endl
		<< "attack_damage : " << dTrap.getAttackDamage() << std::endl
		<< std::endl;
}
