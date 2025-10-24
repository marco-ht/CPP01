/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 07:24:51 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/24 08:16:37 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
    private:
    std::string  name;

    public:
    void announce( void );
    Zombie(std::string name);
    Zombie();
    ~Zombie();
    void    setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );


#endif