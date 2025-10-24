/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 22:56:51 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/24 23:43:29 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wp) :
wpREF(wp)
{
    this->name = name;
}

void    HumanA::attack(void)
{
    std::cout << name << " attacks with their " << wpREF.getType() << std::endl;
}
