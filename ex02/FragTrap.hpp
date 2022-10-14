/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlarra <mlarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:40:26 by mlarra            #+#    #+#             */
/*   Updated: 2022/10/14 22:16:55 by mlarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
private:
	/* data */
public:
	FragTrap();
	FragTrap(const FragTrap & src);
	FragTrap & operator=(const FragTrap & rhs);
	virtual ~FragTrap();

	FragTrap(std::string enterName);
	void	highFivesGuys(void);
};



#endif