/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 13:29:43 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/14 21:43:29 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Constructor default is call" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & src)
{
	std::cout << "ScavTrap Copy constructor is call" << std::endl;
	*this = src;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &rhs)
{
	Name = rhs.Name;
	HitPoints = rhs.HitPoints;
	EnergyPoints = rhs.EnergyPoints;
	AttackDamage = rhs.AttackDamage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor is call" << std::endl;
}

ScavTrap::ScavTrap(std::string enterName)
{
	std::cout << "ScavTrap Constructor with Name parametr is call" << std::endl;
	Name = enterName;
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
}

void	ScavTrap::guardGate()
{
	if (HitPoints < 1)
	{
		std::cout << "ScavTrap" << Name << " is dead and cannot enter Gate keeper mode" << std::endl;
		return ;
	}
	if (EnergyPoints < 1)
	{
		std::cout << "ScavTrap" << Name << " don't have EnergyPoints and cannot  enter Gate keeper mode" << std::endl;
		return ;
	}
	std::cout << Name << " is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string & target)
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
