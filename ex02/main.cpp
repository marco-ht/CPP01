/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 08:43:46 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/24 22:21:15 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string str;
    std::string *stringPTR;
    std::string &stringREF = str;

    stringPTR = &str;
    str = "HI THIS IS BRAIN";
    std::cout << &str << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
    std::cout << str << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}

/* std::string str2;
str2 = str;
std::cout << &str2 << std::endl;
str2 has a different address while stringREF has the exact same address.
If I modify str2, it doesn't affect str.
If I modify stringREF, I'm modifying str itslef. */