/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 17:14:21 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/10 17:27:44 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void	highFiveGuys( void )
{
	print_line("High Five for Bjarne!", YELLOW);
}

void	FragTrap::attack( const std::string& name )
{
	print_line("FragTrap- in attack", YELLOW);

	ClapTrap::attack(name);
}

const FragTrap&	FragTrap::operator = ( const FragTrap& to_copy )
{
	print_line("FragTrap- Copy Assignment operator called", BOLDGREEN);

	ClapTrap::operator=(to_copy);

	return (*this);
}

FragTrap::FragTrap( const FragTrap& to_copy ) : ClapTrap(to_copy)
{
	print_line("FragTrap- Copy Constructor called", BOLDGREEN);
}

FragTrap::FragTrap( const std::string& name ) : ClapTrap(name)
{
	print_line("FragTrap- String Constructor called", BOLDGREEN);

	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::FragTrap() : ClapTrap()
{
	print_line("FragTrap- Default Constructor called", BOLDGREEN);

	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
}

FragTrap::~FragTrap()
{
	print_line("<<FragTrap destroyed>>", BOLDRED);
}
