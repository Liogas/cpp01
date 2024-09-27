/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glions <glions@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:41:36 by glions            #+#    #+#             */
/*   Updated: 2024/09/27 15:05:31 by glions           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie* zombieHorde(int n, std::string name)
{
    Zombie* horde;
    int     i;

    if (n < 0)
    {
        std::cout << "Error : horde_size < 0" << std::endl;
        return (NULL);
    }
    horde = new Zombie[n];
    if (!horde)
        return (NULL);
    i = -1;
    while (++i < n)
        horde[i].set_name(name);
    return (horde);
}
