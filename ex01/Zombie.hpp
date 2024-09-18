/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarachi <afarachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:38:00 by afarachi          #+#    #+#             */
/*   Updated: 2024/09/18 16:41:59 by afarachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
private:
	std::string	name;
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void announce( void );
	void set_name( std::string name );
};

Zombie* zombieHorde( int N, std::string name );


