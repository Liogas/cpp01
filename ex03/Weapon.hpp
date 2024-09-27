/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glions <glions@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 15:37:29 by glions            #+#    #+#             */
/*   Updated: 2024/09/27 15:46:48 by glions           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon
{
    public:
        Weapon(void);
        Weapon(std::string type);
        ~Weapon(void);
        const std::string& getType(void);
        void         setType(std::string type);
    private:
        std::string type;
};

#endif