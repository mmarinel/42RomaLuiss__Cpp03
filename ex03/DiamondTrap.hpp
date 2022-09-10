/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 18:59:50 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/10 19:20:57 by mmarinel         ###   ########.fr       */
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

class DiamondTrap : public ClapTrap, public FragTrap
{
private:
	std::string	name;
public:
	void				whoAmI	( void );
	void				attack			( const std::string& name );
	const DiamondTrap&	operator =		( const DiamondTrap& to_copy );
						DiamondTrap		( const DiamondTrap& to_copy );
						DiamondTrap		( const std::string& name );
						DiamondTrap		();
						~DiamondTrap	();
};


#endif /* DIAMONDTRAP_H */
