/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 07:43:30 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/24 08:12:02 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

int main(void)
{
    int i;
    int n;
    Zombie  *ptr;

    n = 5;
    ptr = zombieHorde( n, "Alessio" );
    i = 0;
    while (i < n)
    {
        ptr[i].announce();
        i++;
    }
    delete  ptr;
}
