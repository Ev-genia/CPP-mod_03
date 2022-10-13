/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:11:05 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/13 14:36:27 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

// CANONIC FORM
// Class containing at least:
// 1) Constructor default
// 2) Copy constructor
// 3) '=' Operator overload
// 4) Destructor (virtual!)

class ClapTrap
{
private:
	std::string	Name;
	int			HitPoints = 10;
	int			EnergyPoints = 10;
	int			AttackDamage = 0;
public:
	ClapTrap();
	ClapTrap(const ClapTrap &src);
	ClapTrap & operator=(const ClapTrap &rhs);
	~ClapTrap();
	
	ClapTrap(std::string	Name);
	
	void		attack(const std::string& target);//ClapTrap <name> attacks <target>, causing <damage> points of damage!
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	std::string	getName( void) const;
	void		setName(std::string Name);
	int			getHitPoints( void) const;
	void		setHitPoints(int HitPoints);
	int			getEnergyPoints( void) const;
	void		setEnergyPoints(int EnergyPoints);
	int			getAttackDamage( void) const;
	void		setAttackDamage(int AttackDamage);
};

#endif