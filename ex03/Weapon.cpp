/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarachi <afarachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 07:37:56 by afarachi          #+#    #+#             */
/*   Updated: 2024/09/19 09:21:01 by afarachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &weapon)
{
	this->setType(weapon);
}
Weapon::~Weapon()
{
	std::cout << this->getType() << " weapon has been dropped" << std::endl;
}

std::string Weapon::getType() const
{
	return (type);
}

void Weapon::setType(const std::string &weapon)
{
	type = weapon;
}