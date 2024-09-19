/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarachi <afarachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 07:37:58 by afarachi          #+#    #+#             */
/*   Updated: 2024/09/19 09:38:08 by afarachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Weapon
{
	private:
		std::string	type;

	public:
		Weapon(const std::string &weapon);
		~Weapon();
		std::string getType() const;
		void setType(const std::string &weapon);
};