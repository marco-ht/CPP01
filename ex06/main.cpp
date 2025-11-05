/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <mpierant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 03:49:57 by mpierant          #+#    #+#             */
/*   Updated: 2025/11/05 19:00:29 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl h;
    int i;
    std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    if(argc != 2)
        return(0);
    i = 0;
    while (i < 4 && argv[1] != str[i])
        i++;
    switch (i)
    {
        case 0:
            h.complain("DEBUG");
            h.complain("INFO");
            h.complain("WARNING");
            h.complain("ERROR");
            break;
        case 1:
            h.complain("INFO");
            h.complain("WARNING");
            h.complain("ERROR");
            break;
        case 2:
            h.complain("WARNING");
            h.complain("ERROR");
            break;
        case 3:
            h.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}