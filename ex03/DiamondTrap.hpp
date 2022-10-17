/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 22:55:45 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/17 12:51:37 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
private:
	std::string	_name;
public:
	DiamondTrap();
	DiamondTrap(const DiamondTrap &src);
	DiamondTrap & operator=(const DiamondTrap &rhs);
	~DiamondTrap();

	void	attack(const std::string & target);
	
	DiamondTrap(std::string enterName);
	void	whoAmI();
};

#endif