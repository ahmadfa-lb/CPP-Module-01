/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarachi <afarachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 07:39:06 by afarachi          #+#    #+#             */
/*   Updated: 2024/09/19 09:36:33 by afarachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->has_weapon= false;
	std::cout << this->name <<" has joined" << std::endl;
}

HumanB::~HumanB(void)
{
    std::cout << this->name << " died." << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
	this->has_weapon = true;
	std::cout << this->name << " grabbed a " << this->weapon->getType() << "." << std::endl;
}

void HumanB::attack(void)
{
    if (this->has_weapon)
        std::cout << this->name << " attacks with his " << this->weapon->getType() << "." << std::endl;
    else
        std::cout << this->name << " attacks with his hands." << std::endl;
}