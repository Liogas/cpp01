/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glions <glions@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:42:04 by glions            #+#    #+#             */
/*   Updated: 2024/09/26 22:33:04 by glions           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

/****** CONSTRUCTOR ******/
Zombie::Zombie(void)
{
    this->name = "DEFAULT";
}

Zombie::Zombie(std::string name)
{
    this->name = name;
}

/****** DESTRUCTOR ******/
Zombie::~Zombie(void)
{
    std::cout << "Zombie: " << this->name << " destroyed." << std::endl;
}

void    Zombie::announce(void)
{
    if (this->name == "Foo")
        std::cout << "Foo: ";
    else
        std::cout << "<" << this->name << ">: ";
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

