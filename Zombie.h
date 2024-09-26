/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glions <glions@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:36:44 by glions            #+#    #+#             */
/*   Updated: 2024/09/26 22:32:54 by glions           ###   ########.fr       */
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
        void        announce(void);
    private:
        std::string name;
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif