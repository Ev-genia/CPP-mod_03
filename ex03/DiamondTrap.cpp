/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 22:55:50 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/17 14:31:37 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap Constructor default is call" << std::endl;
	_name = "_";
	ClapTrap::Name = _name + "clap_name";
	HitPoints = FragTrap::defoultHitPoints;
	EnergyPoints = ScavTrap::defoultEnergyPoints;
	AttackDamage = FragTrap::defoultAttackDamage;
}

DiamondTrap::DiamondTrap(std::string enterName): ScavTrap(enterName), 
							FragTrap(enterName), _name(enterName)
{
	std::cout << "DiamondTrap Constructor with Name parametr is call" << std::endl;
	ClapTrap::Name = _name + "_clap_name";
	HitPoints = FragTrap::defoultHitPoints;
	EnergyPoints = ScavTrap::defoultEnergyPoints;
	AttackDamage = FragTrap::defoultAttackDamage;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &rhs)
{
	_name = rhs._name;
	HitPoints = rhs.HitPoints;
	EnergyPoints = rhs.EnergyPoints;
	AttackDamage = rhs.AttackDamage;
	return (*this);
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
{
	std::cout << "DiamondTrap Copy constructor is call" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor is call" << std::endl;
}

void	DiamondTrap::attack(const std::string & target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "I am DiamondTrap my Name is " << DiamondTrap::_name << 
		", my ClapTrap Name is " << ClapTrap::Name << std::endl;
}
