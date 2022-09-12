/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 14:53:08 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/12 10:47:44 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void	ScavTrap::guardGate( void )
{
	std::cout
		<< YELLOW
		<< "ScavTrap " << this->getName()
		<< " is now in Gate keeper mode"
		<< RESET
		<< std::endl;
	this->in_gate_keeping_mode = true;
}

void	ScavTrap::attack( const std::string& target )
{
	print_line("ScavTrap- in attack: ", YELLOW);

	this->ClapTrap::attack(target);
}

ScavTrap::ScavTrap ()
{
	print_line("ScavTrap- Default Constructor called", BOLDGREEN);

	this->in_gate_keeping_mode = false;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap ( const std::string name ) : ClapTrap(name)
{
	print_line("ScavTrap- String Constructor called", BOLDGREEN);

	this->in_gate_keeping_mode = false;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap ( const ScavTrap& to_copy )
{
	print_line("ScavTrap- Copy Constructor called", BOLDGREEN);

	*this = to_copy;
}

const ScavTrap&	ScavTrap::operator = ( const ScavTrap& to_copy )
{
	print_line("ScavTrap- Copy Assignment operator called", BOLDGREEN);
	
	this->ClapTrap::operator=(to_copy);
	this->in_gate_keeping_mode = to_copy.in_gate_keeping_mode;

	return (*this);
}

ScavTrap::~ScavTrap()
{
	print_line("<<ScavTrap destroyed>>", BOLDRED);
}

bool	ScavTrap::get_mode( void ) const
{
	return (this->in_gate_keeping_mode);
}

void	ScavTrap::set_mode( const bool mode )
{
	this->in_gate_keeping_mode = mode;
}
