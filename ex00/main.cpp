/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:43:18 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/14 12:42:33 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap	man1("Tim");
	ClapTrap	man2("John");

	while (man1.getEnergyPoints() > 0)
	{
		man1.attack(man2.getName());
		man2.takeDamage(man1.getAttackDamage());
		man1.showInfo();
		man2.showInfo();
	}
	man2.beRepaired(4);
	man1.attack(man2.getName());
	man2.takeDamage(man1.getAttackDamage());
	man1.showInfo();
	man2.showInfo();
	
	return 0;
}
