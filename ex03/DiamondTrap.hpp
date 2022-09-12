/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 18:59:50 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/12 15:12:35 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <string>
# include <iostream>
# include "utils.hpp"
# include "../colors.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string		name;
public:
	void				whoAmI			( void );
	void				attack			( const std::string& argName );
	const std::string&	getName			( void ) const;
	const std::string&	getClapName		( void ) const;
	unsigned int		getHp			( void ) const;
	unsigned int		getEp			( void ) const;
	unsigned int		getAttackDamage	( void ) const;
	const DiamondTrap&	operator =		( const DiamondTrap& to_copy );
						DiamondTrap		( const DiamondTrap& to_copy );
						DiamondTrap		( const std::string& argName );
						DiamondTrap		();
						~DiamondTrap	();
};


#endif /* DIAMONDTRAP_H */
