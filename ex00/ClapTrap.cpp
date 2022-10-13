/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:11:13 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/13 17:38:22 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Constructor default is call" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "Copy constructor is call" << std::endl;
	*this = src;
}

std::string	ClapTrap::getName(void) const
{
	return (Name);
}

int	ClapTrap::getHitPoints(void) const
{
	return (HitPoints);
}

int	ClapTrap::getEnergyPoints(void) const
{
	return (EnergyPoints);
}

int	ClapTrap::getAttackDamage(void) const
{
	return (AttackDamage);
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
	std::cout << "Constructor with Name parametr is call" << std::endl;
	Name = enterName;
	HitPoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
}

void	ClapTrap::attack(const std::string &target)
{
	if (EnergyPoints > 0 && HitPoints > 0)
	{
		std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
		EnergyPoints -= 1;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (HitPoints > amount)
	{
		std::cout << "ClapTrap " << Name << " take Damage " << amount << "!" << std::endl;
		HitPoints -= amount;
	}
	else
		HitPoints = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (EnergyPoints > 0)
	{
		HitPoints += amount;
		EnergyPoints -= 1;
	}
}
