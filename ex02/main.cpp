/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:43:18 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/14 22:55:05 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
	FragTrap	man1("1");
	FragTrap	man2("2");

	man1.showInfo();
	man2.showInfo();
	man1.highFivesGuys();
	man1.attack("2");
	man2.takeDamage(man1.getAttackDamage());
	man1.showInfo();
	man2.showInfo();
	return 0;
}
