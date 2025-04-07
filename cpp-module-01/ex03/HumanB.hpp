/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgursoy <bgursoy@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:49:10 by bgursoy           #+#    #+#             */
/*   Updated: 2024/01/30 12:49:11 by bgursoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon* weapon;
        std::string name;
    public:
        HumanB(std::string nameTmp);
        void    attack();
        void    setWeapon(Weapon &Weapon);
};
