/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glions <glions@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 01:29:25 by glions            #+#    #+#             */
/*   Updated: 2024/10/04 02:29:07 by glions           ###   ########.fr       */
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
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "DEBUG MSG" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "INFO MSG" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "WARNING MSG" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "ERROR MSG" << std::endl;
}

void	Harl::complain(std::string level)
{
	int	i;

	i = -1;
	while (++i < 4)
	{
		if (this->names[i] == level)
		{
			(this->*this->messages[i])();
			i = 4;
		}
	}
	if (i != 5)
		std::cout << "Level not valid" << std::endl;
	std::cout << std::endl;
}

void	Harl::filter(std::string level)
{
	int		i;

	i = -1;
	while (++i < 4)
	{
		if (this->names[i] == level)
			break;
	}
	switch(i)
    {
        case 0 :
            this->complain("DEBUG");
            this->complain("INFO");
            this->complain("WARNING");
            this->complain("ERROR");
			break ;
        case 1 :
            this->complain("INFO");
            this->complain("WARNING");
            this->complain("ERROR");
			break ; 
        case 2 :
            this->complain("WARNING");
            this->complain("ERROR");
			break ;
        case 3 : 
            this->complain("ERROR");
			break ;
        default: 
			std::cout << "[ probably complaining about insignificant problem ]" << std::endl;
			break ;
    }
}
