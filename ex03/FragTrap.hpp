/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:40:26 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/17 13:30:14 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
protected:
	static const int	defoultHitPoints = 100;
	static const int	defoultEnergyPoints = 100;
	static const int	defoultAttackDamage = 30;
public:
	FragTrap();
	FragTrap(const FragTrap & src);
	FragTrap & operator=(const FragTrap & rhs);
	virtual ~FragTrap();

	FragTrap(std::string enterName);
	void	highFivesGuys(void);
};



#endif