/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glions <glions@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 15:59:25 by glions            #+#    #+#             */
/*   Updated: 2024/09/27 19:00:35 by glions           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void)
{
    this->name = "";
    this->weapon = NULL;
}

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;
    std::cout << "HumanB(" << this->name << ") : created" << std::endl;
}

HumanB::~HumanB(void)
{
    std::cout << "HumanB(" << this->name << ") deleted" << std::endl; 
}

void    HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

void    HumanB::attack(void)
{
    if (!this->weapon)
        std::cout << this->name << " doesn't have weapon";
    else
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}