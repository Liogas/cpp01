/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glions <glions@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:23:21 by glions            #+#    #+#             */
/*   Updated: 2024/10/04 01:54:55 by glions           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl    test = Harl();
    
    test.complain("INFO");
    test.complain("DEBUG");
    test.complain("WARNING");
    test.complain("WARNING");
    test.complain("DEBUG");
    test.complain("ERROR");
    test.complain("ERROR");
    test.complain("INFO");
    test.complain("WARNING");
    test.complain("ERROR");
    test.complain("WARNING");
    test.complain("INFO");
    test.complain("INFO");
    return (0);
}
