/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glions <glions@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:42:04 by glions            #+#    #+#             */
/*   Updated: 2024/09/27 14:58:42 by glions           ###   ########.fr       */
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

/****** METHODS ******/
void    Zombie::announce(void)
{
    if (this->name == "Foo")
        std::cout << "Foo: ";
    else
        std::cout << "<" << this->name << ">: ";
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::set_name(std::string name)
{
    this->name = name;
}
