/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 19:00:12 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/11 16:25:31 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void	DiamondTrap::whoAmI( void )
{
	std::cout
		<< this->name
		<< "---"
		<< ClapTrap::getName()
		<< std::endl;
}

void	DiamondTrap::attack( const std::string& argName )
{
	ScavTrap::attack(argName);
}

const DiamondTrap&	DiamondTrap::operator = ( const DiamondTrap& to_copy )
{
	this->name.assign(to_copy.name);
	ClapTrap::setName(to_copy.name + "_clap_name");
	this->hit_points = to_copy.hit_points;
	this->energy_points = to_copy.energy_points;
	this->attack_damage = to_copy.attack_damage;

	return (*this);
}

DiamondTrap::DiamondTrap( const DiamondTrap& to_copy )
{
	*this = to_copy;
}

DiamondTrap::DiamondTrap( const std::string& argName )
{
	this->name.assign(argName);
	ClapTrap::setName(argName + "_clap_name");
	this->hit_points = FragTrap::getHp();
	this->energy_points = ScavTrap::getEp();
	this->attack_damage = FragTrap::getAttackDamage();
}

DiamondTrap::DiamondTrap()
{
	this->name.assign("nameless");
	ClapTrap::setName("nameless_clap_name");
	this->hit_points = FragTrap::getHp();
	this->energy_points = ScavTrap::getEp();
	this->attack_damage = FragTrap::getAttackDamage();
}

DiamondTrap::~DiamondTrap()
{
	print_line("<<DiamondTrap destroyed>>", BOLDRED);
}
