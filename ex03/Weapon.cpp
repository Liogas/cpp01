/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glions <glions@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 15:40:59 by glions            #+#    #+#             */
/*   Updated: 2024/09/27 18:59:38 by glions           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
    this->type = "";
}

Weapon::Weapon(std::string type)
{
    this->type = type;
    std::cout << "Weapon(" << this->type << ") : created" << std::endl;
}

Weapon::~Weapon(void)
{
    std::cout << "Weapon(" << this->type <<") : deleted" << std::endl;
}

const std::string& Weapon::getType(void)
{
    return (this->type);
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}
