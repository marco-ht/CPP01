/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 03:07:53 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/25 05:34:15 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

void    Harl::debug( void )
{
    std::cout << "DEBUG - I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std:: endl;
}

void    Harl::info( void )
{
    std::cout << "INFO - I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std:: endl;
}

void    Harl::warning( void )
{
    std::cout << "WARNING - I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std:: endl;
}

void    Harl::error( void )
{
    std::cout << "ERROR - This is unacceptable! I want to speak to the manager now." << std:: endl;
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