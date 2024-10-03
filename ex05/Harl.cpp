/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glions <glions@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 01:29:25 by glions            #+#    #+#             */
/*   Updated: 2024/10/04 01:58:53 by glions           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	this->names[0] = "DEBUG";
	this->names[1] = "INFO";
	this->names[2] = "WARNING";
	this->names[3] = "ERROR";
	this->messages[0] = &Harl::debug;
	this->messages[1] = &Harl::info;
	this->messages[2] = &Harl::warning;
	this->messages[3] = &Harl::error;
	std::cout << "Harl: created" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "Harl: deleted" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "DEBUG" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "INFO" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "WARNING" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "ERROR" << std::endl;
}

void	Harl::complain(std::string level)
{
	int	i;

	i = -1;
	while (++i < 4)
	{
		if (Harl::names[i] == level)
		{
			(this->*this->messages[i])();
			i = 4;
		}
	}
	if (i != 5)
		std::cout << "Level not valid" << std::endl;
}
