/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 15:45:21 by erijania          #+#    #+#             */
/*   Updated: 2024/12/22 16:09:56 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

static void print_argument(char *str)
{
    while (*str)
        std::cout << (char) std::toupper(*(str++)) << std::ends;
}

int main(int argc, char **argv)
{
    int argi;

    argi = 1;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (argc > argi)
        {
            print_argument(argv[argi]);
            if (argv[argi + 1])
                std::cout << ' ' << std::ends;
            argi++;
        }
        std::cout << std::endl;
    }
    return (0);    
}
