/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 17:07:57 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/12 14:17:18 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

# include "ClapTrap.hpp"
# include <string>
# include <iostream>
# include "utils.hpp"
# include "../colors.hpp"

class FragTrap : public virtual ClapTrap//* We need virtual in order not to define two storages for Claptrap members
{
private:
	/* data */
public:
	void			highFiveGuys	( void );
	void			attack			( const std::string& name );
	const FragTrap&	operator =		( const FragTrap& to_copy );
					FragTrap		( const FragTrap& to_copy );
					FragTrap		( const std::string& name );
					FragTrap		();
					~FragTrap		();
};


#endif /* FRAGTRAP_H */
