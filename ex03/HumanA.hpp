/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glions <glions@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 15:35:18 by glions            #+#    #+#             */
/*   Updated: 2024/09/27 18:56:28 by glions           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
    public:
        HumanA(void);
        HumanA(std::string name, Weapon& weapon);
        ~HumanA(void);
        void    attack(void);
    private:
        std::string name;
        Weapon      *weapon;
};

#endif