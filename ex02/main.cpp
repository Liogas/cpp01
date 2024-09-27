/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glions <glions@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 15:08:00 by glions            #+#    #+#             */
/*   Updated: 2024/09/27 15:16:34 by glions           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string     msg = "HI THIS IS BRAIN";
    std::string     *p_msg = &msg;
    std::string&    r_msg = msg;

    std::cout << "adress str : " << &msg << std::endl;
    std::cout << "adress ptr : " << p_msg << std::endl;
    std::cout << "adress ref : " << &r_msg << std::endl;

    std::cout << "value str : " << msg << std::endl;
    std::cout << "value ptr : " << *p_msg << std::endl;
    std::cout << "value ref : " << r_msg << std::endl;
    return (0);
}