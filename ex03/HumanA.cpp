/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarachi <afarachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 07:38:33 by afarachi          #+#    #+#             */
/*   Updated: 2024/09/19 09:39:44 by afarachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):weapon(weapon)
{
	this->name = name;
	std::cout << this->name <<" grabbed a " << this->weapon.getType() << " to fight." << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << this->name << " died." << std::endl;
}

void HumanA::attack(void)
{
    std::cout << this->name << " attacks with his " << this->weapon.getType() << "." << std::endl;
}