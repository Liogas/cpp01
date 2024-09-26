/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glions <glions@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 22:25:21 by glions            #+#    #+#             */
/*   Updated: 2024/09/26 22:34:36 by glions           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(void)
{
    Zombie *z1 = newZombie("Foo");
    Zombie *z3 = newZombie("Off");
    z1->announce();
    z3->announce();
    randomChump("TEST1");
    randomChump("TEST2");
    randomChump("TEST3");
    randomChump("TEST4");
    randomChump("TEST5");
    randomChump("TEST6");
    randomChump("TEST7");
    delete z3;
    delete z1;
    return (0);
}
