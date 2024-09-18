/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarachi <afarachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:33:05 by afarachi          #+#    #+#             */
/*   Updated: 2024/09/18 17:03:14 by afarachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int nb_of_zombies = 250;
    std::string name_of_horde = "zobmieHorde";
    Zombie *z_horde = zombieHorde(nb_of_zombies, name_of_horde);

    if (z_horde == NULL)
        return (1);
    
    for (int i = 0; i < nb_of_zombies; i++)
        z_horde[i].announce();
    
    
    delete[] z_horde;
    return (0);
}