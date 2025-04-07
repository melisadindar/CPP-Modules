/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgursoy <bgursoy@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:44:58 by bgursoy           #+#    #+#             */
/*   Updated: 2024/02/02 18:10:48 by bgursoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av) 
{
    if (ac > 1) 
    {
        int i = 1;
        while (av[i]) 
        {
            int j = 0;
            while (av[i][j])
            {
                if (av[i][j] >= 'a' && av[i][j] <= 'z') 
                {
                    av[i][j] -= 32;
                }
                std::cout << av[i][j];
                j++;
            }
            i++;
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}

