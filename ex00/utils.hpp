/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:37:43 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/11 11:19:41 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMON_UTILS_H
#define COMMON_UTILS_H

# include "../colors.hpp"
# include <iostream>

	//* utils

void	print_line(const char *str, const char *color);
void	print_funcName(const char *funcName);

	//* Actions print utils

void	attack_print(const std::string clapName, const std::string target,
				unsigned int damage);
void	takeDamage_print(const std::string clapName, const unsigned int amount);
void	beRepaired_print(const std::string clapName, const unsigned int amount);

void	hpFail_print(const char *funcName, std::string clapName);
void	epFail_print(const char *funcName, std::string clapName);

#endif /* COMMON_UTILS_H */
