/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afarachi <afarachi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:49:28 by afarachi          #+#    #+#             */
/*   Updated: 2024/09/18 17:02:12 by afarachi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    if (N <= 0)
    {
        std::cout << "A Horde cannot contain less than 1 Zombie." << std::endl;
        return (NULL);
    }
    Zombie *zombiehorde = new Zombie[N];

    for (int i = 0; i < N; i++)
        zombiehorde[i].set_name(name);

    return (zombiehorde);
}
