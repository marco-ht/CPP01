/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 22:49:12 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/24 23:29:50 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
