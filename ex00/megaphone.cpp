/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimazouz <fimazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:13:00 by firdawssema       #+#    #+#             */
/*   Updated: 2024/11/05 15:51:16 by fimazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    if(ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for(int i = 1; i < ac; i++)
        {
            for(int j = 0; av[i][j] != '\0'; j++)
            {
                std::cout << static_cast<char>(std::toupper(av[i][j]));
            }
        }
        std::cout << std::endl;
    }
    return(0);
};
