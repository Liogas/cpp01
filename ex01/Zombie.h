/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glions <glions@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:36:44 by glions            #+#    #+#             */
/*   Updated: 2024/09/27 15:05:28 by glions           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie
{
    public:
        Zombie(void);
        Zombie(std::string name);
        ~Zombie(void);
        void        set_name(std::string name);
        void        announce(void);
    private:
        std::string name;
};

Zombie* zombieHorde(int n, std::string name);

#endif