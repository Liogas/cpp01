/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glions <glions@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 22:06:00 by glions            #+#    #+#             */
/*   Updated: 2024/09/26 22:08:42 by glions           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

void    randomChump(std::string name)
{
    Zombie  zombie(name);
    zombie.announce();
}
