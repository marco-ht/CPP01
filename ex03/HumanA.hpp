/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 22:47:50 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/24 23:38:55 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"

class   HumanA
{
    private:
    std::string name;
    Weapon &wpREF;

    public:
    HumanA(std::string name, Weapon &wp);
    void    attack(void);
};
