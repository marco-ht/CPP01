/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 08:00:53 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/24 22:04:41 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i;
    Zombie  *ptr;
    
    ptr = new Zombie[N];
    i = 0;
    while (i < N)
    {
        ptr[i].setName(name);
        i++;
    }
    return (ptr);
}
