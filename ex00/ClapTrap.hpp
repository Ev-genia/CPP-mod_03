/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:11:05 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/14 14:30:24 by mlarra           ###   ########.fr       */
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
	int			HitPoints;
	int			EnergyPoints;
	int			AttackDamage;
public:
	ClapTrap();
	ClapTrap(const ClapTrap &src);
	ClapTrap & operator=(const ClapTrap &rhs);
	virtual ~ClapTrap();
	
	ClapTrap(std::string	Name);
	
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	std::string	getName( void) const;
	int			getHitPoints( void) const;
	int			getEnergyPoints( void) const;
	int			getAttackDamage( void) const;
	void		showInfo(void) const;
	void		setName(std::string Name);
	void		setHitPoints(int HitPoints);
	void		setEnergyPoints(int EnergyPoints);
	void		setAttackDamage(int AttackDamage);
};

#endif