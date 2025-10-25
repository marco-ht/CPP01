/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 03:07:53 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/25 06:14:13 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

void    Harl::debug( void )
{
    std::cout << "[ DEBUG ] \nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!\n" << std:: endl;
}

void    Harl::info( void )
{
    std::cout << "[ INFO ] \nI cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std:: endl;
}

void    Harl::warning( void )
{
    std::cout << "[ WARNING ] \nI think I deserve to have some extra bacon for free.\nI’ve been coming for years, whereas you started working here just last month.\n" << std:: endl;
}

void    Harl::error( void )
{
    std::cout << "[ ERROR ] \nThis is unacceptable! I want to speak to the manager now.\n" << std:: endl;
}

void    Harl::complain( std::string level )
{
    int i;
    
    std::string names[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*complains[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    i = 0;
    while (names[i] != level && i < 4)
        i++;
    if (i == 4)
    {
        std::cout << "[---] - Level not found." << std::endl;
        return;
    }
    (this->*(complains[i]))();
}


/* typedef void (Harl::*Complains)();
Complains complains[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error}; */

/*

https://stackoverflow.com/questions/43205893/array-of-pointers-on-member-functions-of-current-class?noredirect=1&lq=1

*/

/* 

(this->*(complains[i]))();

Chiama la funzione membro puntata da complains[i], applicandola all’oggetto puntato da this.

this specifica l’oggetto: la funzione membro ha bisogno di sapere su quale istanza operare.

*/