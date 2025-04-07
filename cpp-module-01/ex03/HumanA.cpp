/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgursoy <bgursoy@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:48:53 by bgursoy           #+#    #+#             */
/*   Updated: 2024/01/30 15:15:52 by bgursoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Weapon) : name(name), weapon(Weapon)
{
}

//HumanA::~HumanA(){};

void    HumanA::attack()
{
    std::cout << this->name << " attacks with " << this->weapon.getType() << std::endl;
}