/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:29:39 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/17 13:26:46 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
protected:
	static const int	defoultHitPoints = 100;
	static const int	defoultEnergyPoints = 50;
	static const int	defoultAttackDamage = 20;
public:
	ScavTrap();
	ScavTrap(const ScavTrap & src);
	ScavTrap & operator=(const ScavTrap & rhs);
	virtual ~ScavTrap();

	ScavTrap(std::string enterName);
	void	guardGate();
	void	attack(const std::string &target);
};




#endif