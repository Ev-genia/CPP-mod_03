/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:43:18 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/17 12:33:14 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main( void )
{
	DiamondTrap	man1("1D");
	DiamondTrap	man2("2D");

	man1.whoAmI();
	man1.showInfo();
	man1.attack("2D");
	man2.takeDamage(man1.getAttackDamage());
	man1.showInfo();
	man2.showInfo();
	return 0;
}
