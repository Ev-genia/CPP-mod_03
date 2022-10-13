/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:11:13 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/13 15:32:15 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Constructor default is call" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	*this = src;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	int			set;
	std::string	name;

	Name = rhs.getName();
	HitPoints = rhs.getHitPoints();
	EnergyPoints = rhs.getEnergyPoints();
	AttackDamage = rhs.getAttackDamage();
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor is call" << std::endl;
}

ClapTrap::ClapTrap(std::string enterName)
{
	Name = enterName;
}
