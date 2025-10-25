/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 02:58:41 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/25 03:51:25 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

class   Harl
{
    private:
    void    debug( void );
    void    info( void );
    void    warning( void );
    void    error( void );

    public:
    void    complain( std::string level );
};

#endif
