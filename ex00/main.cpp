/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 07:43:30 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/24 07:47:22 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

int main(void)
{
    Zombie  *ptr1;
    Zombie  *ptr2;

    ptr1 = newZombie( "Gianfranco" );
    ptr2 = newZombie( "Alessio" );
    randomChump( "Elisabetta" );
    randomChump( "Carmelo" );
    ptr1->announce();
    ptr2->announce();
    delete  ptr1;
    delete  ptr2;
}
