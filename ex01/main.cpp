/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:43:18 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/17 12:22:34 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
	ScavTrap	man3("Bob");
	ScavTrap	man4("Todd");
	ScavTrap	man5(man3);
	ScavTrap	man6;

	man6 = man5;
	man3.showInfo();
	man5.showInfo();
	man6.showInfo();
	man3.attack("Todd");
	man4.takeDamage(man3.getAttackDamage());
	man3.showInfo();
	man4.showInfo();
	man4.beRepaired(10);
	man4.showInfo();

	return 0;
}
