/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgursoy <bgursoy@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:49:24 by bgursoy           #+#    #+#             */
/*   Updated: 2024/01/30 12:49:25 by bgursoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon();
        ~Weapon();
        Weapon(std::string type);

        const std::string &getType();
        void setType(std::string type);

};


#endif