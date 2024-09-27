/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glions <glions@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:08:45 by glions            #+#    #+#             */
/*   Updated: 2024/09/27 19:57:51 by glions           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

std::string replace(std::string src, char *string1, char *string2)
{
    size_t  pos;
    std::string s1;
    std::string s2;

    s1 = string1; 
    s2 = string2; 
    pos = src.find(s1, 0);
    while (pos != std::string::npos)
    {
        src.erase(pos, s1.size());
        src.insert(pos, s2);
        pos = src.find(s1, 0);
    }
    return (src);
}

int main(int ac, char **av)
{
    std::ifstream   *src;
    std::ofstream   *dst;
    std::string     tmp;

    if (ac != 4)
        return (1);
    tmp = av[1];
    src = new std::ifstream(tmp.c_str());
    /* OUVERTURE DU FICHIER DE LECTURE */
    if (!src->is_open())
    {
        std::cerr << "can't open " << av[1] << std::endl;
        delete src;
        return (1);
    }
    tmp.append(".replace");
    /* OUVERTURE DU FICHIER D'ECRITURE */
    dst = new std::ofstream(tmp.c_str());
    if (!dst->is_open())
    {
        std::cerr << "can't create " << tmp << std::endl;
        src->close();
        delete src;
        delete dst;
        return (1);
    }
    /* LECTURE + ECRITURE */
    while (std::getline(*src, tmp))
    {
        tmp = replace(tmp, av[2], av[3]);
        *dst << tmp << std::endl;
    }
    src->close();
    dst->close();
    delete src;
    delete dst;
    return (0);
}
