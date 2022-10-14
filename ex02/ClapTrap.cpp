/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:11:13 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/14 21:53:17 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Constructor default is call" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "ClapTrap Copy constructor is call" << std::endl;
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
	Name = rhs.Name;
	HitPoints = rhs.HitPoints;
	EnergyPoints = rhs.EnergyPoints;
	AttackDamage = rhs.AttackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor is call" << std::endl;
}

ClapTrap::ClapTrap(std::string enterName)
{
	std::cout << "ClapTrap Constructor with Name parametr is call" << std::endl;
	Name = enterName;
	HitPoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
}

void	ClapTrap::attack(const std::string &target)
{
	if (HitPoints < 1)
	{
		std::cout << "ClapTrap " << Name << " died and cannot attack" << std::endl;
		return ;
	}
	if (EnergyPoints < 1)
	{
		std::cout << "ClapTrap " << Name << " don't have EnergyPoints and cannot attack" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << Name << " attacks ";
	std::cout << target << " lost " << AttackDamage << " Hit Points" << std::endl;
	EnergyPoints -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (HitPoints < 1)
	{
		std::cout << "ClapTrap " << Name << " is already dead " << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << Name << " took " << amount << " Damage" << std::endl;
	if (amount > HitPoints)
	{
		std::cout << "ClapTrap " << Name << " dead " << std::endl;
		HitPoints = 0;
	}
	else
		HitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (HitPoints < 1)
	{
		std::cout << "ClapTrap " << Name << " died and cannot be repaired" << std::endl;
		return ;
	}
	if (EnergyPoints < 1)
	{
		std::cout << Name << " has no EnergyPoints and cannot be repaired" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << Name << " be Repaired " << amount << "!" << std::endl;
	HitPoints += amount;
	EnergyPoints -= 1;
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
