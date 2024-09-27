/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glions <glions@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 15:48:37 by glions            #+#    #+#             */
/*   Updated: 2024/09/27 19:00:16 by glions           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(void)
{
    this->name = "";
    this->weapon = NULL;
}

HumanA::HumanA(std::string name, Weapon &weapon)
{
    this->name = name;
    this->weapon = &weapon;
    std::cout << "HumanA(" << this->name << ") : created" << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << "HumanA(" << this->name << ") deleted" << std::endl;
}

void HumanA::attack(void)
{
    if (!this->weapon)
        std::cout << this->name << " doesn't have weapon";
    else
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
