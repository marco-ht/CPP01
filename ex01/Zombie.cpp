/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 07:25:20 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/24 08:22:49 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"



Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << name << ": created" << std::endl;
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << name << ": destroyed" << std::endl;
}

void Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string name)
{
    this->name = name;
    std::cout << name << ": ready" << std::endl;
}
    