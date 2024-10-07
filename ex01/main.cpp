/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glions <glions@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 22:25:21 by glions            #+#    #+#             */
/*   Updated: 2024/10/07 09:25:26 by glions           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(void)
{
    int         i;
    Zombie      *horde;
    int         horde_size;
    std::string horde_name;

    horde_size = 50;
    horde_name = "horde1";
    horde = zombieHorde(horde_size, horde_name);
    if (!horde)
        return (1);
    i = -1;
    while (++i < horde_size)
        horde[i].announce();
    delete[] horde;
    return (0);
}
