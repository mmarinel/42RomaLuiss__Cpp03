/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 11:17:47 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/10 12:46:03 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

# include <string>
# include <iostream>
# include "utils.hpp"
# include "../colors.hpp"

class ClapTrap
{
private:
	std::string			name;
	unsigned int		hit_points;
	unsigned int		energy_points;
	unsigned int		attack_damage;
public:
	const std::string&	getName( void );
	unsigned int	getAttackDamage( void );
	void				takeDamage	( unsigned int amount );
	void				beRepaired	( unsigned int amount );
	void				attack		(const std::string& target);
	const ClapTrap&		operator =	( const ClapTrap& to_copy );
						ClapTrap	( const ClapTrap& to_copy );
						ClapTrap	( std::string name );
						ClapTrap	();
						~ClapTrap	();
};

#endif /* CLAPTRAP_H */
