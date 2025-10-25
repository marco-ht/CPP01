/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 23:50:39 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/25 02:51:30 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void    ft_replace(std::string line, std::ofstream &outfile, std::string s1, std::string s2)
{
    size_t  pos;
    while(line.find(s1) != std::string::npos)
    {
        pos = line.find(s1);
        line.erase(pos, s1.length());
        line.insert(pos, s2);
    }
    outfile << line << '\n';
}

int main(int argc, char **argv)
{
    std::string line;
    std::string filename;
    std::ifstream    infile;
    std::ofstream    outfile;
    
    if (argc != 4)
    {
        std::cout << "Invalid inputs number" << std::endl;
        return(0);
    }
    filename = argv[1];
    infile.open(filename.c_str());
    if(!infile.is_open())
    {
        std::cout << "Error opening infile" << std::endl;
        return(0);
    }
    outfile.open((filename + ".replace").c_str());
    while (getline(infile, line))
        ft_replace(line, outfile, argv[2], argv[3]);
    infile.close();
    outfile.close();
}

/* ./program test.txt 000 111

vim test.txt
vdhhsdfhshsd
dnhdh000dshdhdv
j000000djajajad000jalalam
sjajvjdjvnvndda
jnadnj0000ajaonjonqe
jjava00000nvolnnvnp */

/*  touch nopermission.txt && chmod 000 nopermission.txt 
    ./program nopermission.txt 000 111
*/

// std::ofstream can't be copied (its copy constructor is private)
// I can't pass it by copy, I need to pass it by reference
