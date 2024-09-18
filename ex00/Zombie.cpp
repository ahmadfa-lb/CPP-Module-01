/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarachi <afarachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:33:15 by afarachi          #+#    #+#             */
/*   Updated: 2024/09/18 15:23:46 by afarachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){}

Zombie::Zombie(std::string name){
	this->name = name;
}

Zombie::~Zombie(){
	std::cout << this->name << " has been destroyed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name 
			  << ": BraiiiiiiinnnzzzZ..."
			  << std::endl;
}
