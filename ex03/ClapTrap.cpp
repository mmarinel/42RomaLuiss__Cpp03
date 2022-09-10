/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 11:29:50 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/10 16:41:21 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

void	ClapTrap::setName( const std::string& name )
{
	this->name.assign(name);
}

void	ClapTrap::setHitPoints( const unsigned int hit_points)
{
	this->hit_points = hit_points;
	this->max_hit_points = hit_points;
}

void	ClapTrap::setEnergyPoints( const unsigned int energy_points )
{
	this->energy_points = energy_points;
}

void ClapTrap::setAttackDamage( const unsigned int attack_damage )
{
	this->attack_damage = attack_damage;
}

void	ClapTrap::attack ( const std::string& target )
{
	std::cout
		<< YELLOW << "in attack: " << RESET;

	if (this->energy_points)
	{
		if (this->hit_points)
		{
			std::cout
				<< CYAN
				<< "ClapTrap " << this->name
				<< " attacks " << target
				<< " causing " << this->attack_damage << " points of damage!";
			this->energy_points -= 1;
		}
		else
			std::cout
				<< BOLDBLUE
				<< "ClapTrap " << this->name
				<< " has no hit points left!";
	}
	else
		std::cout
			<< BOLDBLUE
			<< "ClapTrap " << this->name
			<< " has no energy points left!";

	std::cout
		<< RESET
		<< std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	std::cout
		<< YELLOW << "in takeDamage: " << RESET;

	if (this->hit_points)
	{
		std::cout
			<< CYAN
			<< "ClapTrap " << this->name
			<< " takes " << amount
			<< " damage!";
		this->hit_points -= (amount <= this->hit_points
			? amount : this->hit_points);
	}
	else
	{
		std::cout
			<< BOLDBLUE
			<< "ClapTrap " << this->name
			<< " has no hit points left!";
	}

	std::cout
		<< RESET
		<< std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	std::cout
		<< YELLOW << "in beRepaired: " << RESET;

	if (this->energy_points)
	{
		if (this->hit_points + amount <= this->max_hit_points)
		{
			std::cout
				<< CYAN
				<< "ClapTrap " << this->name
				<< " takes " << amount
				<< " hit point back!";
			this->hit_points += amount;
			this->energy_points -= 1;
		}
		else
			std::cout
				<< BOLDBLUE
				<< "ClapTrap " << this->name
				<< " cannot take more than " << this->max_hit_points - this->hit_points
				<< " points back!";
	}
	else
		std::cout
			<< BOLDBLUE
			<< "ClapTrap " << this->name
			<< " has no energy points left!";

	std::cout
		<< RESET
		<< std::endl;
}

const std::string&	ClapTrap::getName( void )
{
	return (this->name);
}

unsigned int	ClapTrap::getAttackDamage( void )
{
	return (this->attack_damage);
}

ClapTrap::ClapTrap ()
{
	print_line("ClapTrap- Default Constructor called", BOLDGREEN);

	this->name.assign("nameless");
	this->hit_points = 10;
	this->max_hit_points = this->hit_points;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap ( const std::string name )
{
	print_line("ClapTrap- String Constructor called", BOLDGREEN);

	this->name.assign(name);
	this->hit_points = 10;
	this->max_hit_points = this->hit_points;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap ( const ClapTrap& to_copy )
{
	print_line("ClapTrap- Copy Constructor called", BOLDGREEN);

	*this = to_copy;
}

const ClapTrap& ClapTrap::operator = ( const ClapTrap& to_copy )
{
	print_line("ClapTrap- Copy Assignment operator called", BOLDMAGENTA);

	this->name.assign(to_copy.name);
	this->hit_points = to_copy.hit_points;
	this->max_hit_points = to_copy.max_hit_points;
	this->energy_points = to_copy.energy_points;
	this->attack_damage = to_copy.attack_damage;

	return (*this);
}

ClapTrap::~ClapTrap ()
{
	print_line("<<ClapTrap destroyed>>", BOLDRED);
}
