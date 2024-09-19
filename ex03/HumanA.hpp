/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarachi <afarachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 07:38:23 by afarachi          #+#    #+#             */
/*   Updated: 2024/09/19 09:38:15 by afarachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
	private:
		std::string name;
		Weapon &weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);

		void attack(void);
};