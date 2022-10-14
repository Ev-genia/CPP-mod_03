/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:40:30 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/14 22:18:20 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Constructor default is call" << std::endl;
}

FragTrap::FragTrap(const FragTrap & src)
{
	std::cout << "FragTrap Copy constructor is call" << std::endl;
	*this = src;
}

FragTrap & FragTrap::operator=(const FragTrap & rhs)
{
	Name = rhs.Name;
	HitPoints = rhs.HitPoints;
	EnergyPoints = rhs.EnergyPoints;
	AttackDamage = rhs.AttackDamage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor is call" << std::endl;
}

FragTrap::FragTrap(std::string enterName)
{
	std::cout << "FragTrap Constructor with Name parametr is call" << std::endl;
	Name = enterName;
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
}

void	FragTrap::highFivesGuys(void)
{
	if (HitPoints < 1)
	{
		std::cout << "FragTrap " << Name << " died and cannot request a high five" << std::endl;
		return ;
	}
	if (EnergyPoints < 1)
	{
		std::cout << "FragTrap " << Name << " don't have EnergyPoints and cannot request a high five" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << Name << " request a high five" << std::endl;
}
