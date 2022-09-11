/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 11:17:47 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/11 16:05:59 by mmarinel         ###   ########.fr       */
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
	unsigned int		max_hit_points;
	unsigned int		energy_points;
	unsigned int		attack_damage;
protected:
	void				setName( const std::string& argName );
	void				setHitPoints( const unsigned int argHit_points );
	void				setEnergyPoints( const unsigned int argEnergy_points );
	void				setAttackDamage( const unsigned int argAttack_damage );
public:
	const std::string&	getName( void );
	unsigned int		getHp( void );
	unsigned int		getMaxHp( void );
	unsigned int		getEp( void );
	unsigned int		getAttackDamage( void );
	void				takeDamage	( unsigned int amount );
	void				beRepaired	( unsigned int amount );
	void				attack		(const std::string& target);
	const ClapTrap&		operator =	( const ClapTrap& to_copy );
						ClapTrap	( const ClapTrap& to_copy );
						ClapTrap	( const std::string name );
						ClapTrap	();
						~ClapTrap	();
};

#endif /* CLAPTRAP_H */
