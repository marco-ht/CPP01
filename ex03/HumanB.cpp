/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 22:56:54 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/24 23:43:20 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"
#include "HumanB.hpp"

void    HumanB::attack(void)
{
    std::cout << name << " attacks with their " << wpPTR->getType() << std::endl;
}
void    HumanB::setWeapon(Weapon &wp)
{
    wpPTR = &wp;
}

HumanB::HumanB(std::string name)
{
    this->name = name;
}
