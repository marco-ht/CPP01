/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 22:49:12 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/25 03:06:30 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

class   HumanB
{
    private:
    std::string name;
    Weapon *wpPTR;

    public:
    HumanB(std::string name);
    void    attack(void);
    void    setWeapon(Weapon &wp);
};

#endif
