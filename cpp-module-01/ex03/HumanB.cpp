/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgursoy <bgursoy@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:49:04 by bgursoy           #+#    #+#             */
/*   Updated: 2024/01/30 12:49:05 by bgursoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string nameTmp) : name(nameTmp)
{
    this->weapon = NULL;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with " << this->weapon->getType() << std::endl;
}