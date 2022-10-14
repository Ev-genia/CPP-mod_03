/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:11:13 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/14 13:23:17 by mlarra           ###   ########.fr       */
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
	if (HitPoints < 1)
	{
		std::cout << "ClapTrap " << Name << " died" << std::endl;
		return ;
	}
	if (EnergyPoints > 0)
	{
		std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
		EnergyPoints -= 1;
	}
	else
		std::cout << Name << " don't have EnergyPoints" << std::endl;
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
	if (HitPoints < 1)
	{
		std::cout << "ClapTrap " << Name << " died" << std::endl;
		return ;
	}
	if (EnergyPoints > 0)
	{
		std::cout << "ClapTrap " << Name << " be Repaired " << amount << "!" << std::endl;
		HitPoints += amount;
		EnergyPoints -= 1;
	}
	else
		std::cout << Name << " don't have EnergyPoints" << std::endl;
}

void	ClapTrap::showInfo(void) const
{
	std::cout << "Name: " << Name << std::endl;
	std::cout << "Hit Points: " << HitPoints << std::endl;
	std::cout << "Energy Points: " << EnergyPoints << std::endl;
	std::cout << "Attack Damage: " << AttackDamage << std::endl;
	std::cout << "-------------------" << std::endl;
}

void	ClapTrap::setName(std::string enterName)
{
	Name = enterName;
}

void	ClapTrap::setHitPoints(int points)
{
	HitPoints = points;
}

void	ClapTrap::setEnergyPoints(int points)
{
	EnergyPoints = points;
}

void	ClapTrap::setAttackDamage(int points)
{
	AttackDamage = points;
}
