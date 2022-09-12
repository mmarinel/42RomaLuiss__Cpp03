/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printActions_utils.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 11:18:14 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/12 11:31:24 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

void	attack_print(const std::string clapName, const std::string target,
				unsigned int damage)
{
	print_funcName("attack");
	std::cout
		<< CYAN
		<< "ClapTrap " << clapName
		<< " attacks " << target
		<< " causing " << damage << " points of damage!"
		<< std::endl
		<< RESET;
}

void	takeDamage_print(const std::string clapName, const unsigned int amount)
{
	print_funcName("takeDamage");
	std::cout
		<< CYAN
		<< "ClapTrap " << clapName
		<< " takes " << amount << " points of damage!"
		<< std::endl
		<< RESET;
}

void	beRepaired_print(const std::string clapName, const unsigned int amount)
{
	print_funcName("beRepaired");
	std::cout
		<< CYAN
		<< "ClapTrap " << clapName
		<< " takes " << amount << " hit points back!"
		<< std::endl
		<< RESET;
}

void	hpFail_print(const char *funcName, std::string clapName)
{
	print_funcName(funcName);
	std::cout
		<< BOLDBLUE
		<< "ClapTrap " << clapName
		<< " has no hit points left!"
		<< std::endl
		<< RESET;
}

void	epFail_print(const char *funcName, std::string clapName)
{
	print_funcName(funcName);
	std::cout
		<< BOLDBLUE
		<< "ClapTrap " << clapName
		<< " has no energy points left!"
		<< std::endl
		<< RESET;
}
