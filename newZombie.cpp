/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glions <glions@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 22:01:49 by glions            #+#    #+#             */
/*   Updated: 2024/09/26 22:25:05 by glions           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie  *newZombie(std::string name)
{
    Zombie  *zombie;

    zombie = new Zombie(name);
    return (zombie);
}
