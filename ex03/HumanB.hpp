/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarachi <afarachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 07:38:49 by afarachi          #+#    #+#             */
/*   Updated: 2024/09/19 09:38:12 by afarachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{
	private:
		std::string name;
		Weapon *weapon;
		bool has_weapon;
	public:
		HumanB(std::string name);
		~HumanB(void);

		void setWeapon(Weapon &weapon);
		void attack(void);
};