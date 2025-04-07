/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgursoy <bgursoy@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:49:20 by bgursoy           #+#    #+#             */
/*   Updated: 2024/01/30 15:15:43 by bgursoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->setType(type);
}

void Weapon::setType(std::string newType)
{
    this->type = newType;
}

Weapon::~Weapon(){};

const std::string &Weapon::getType(void)
{
    return this->type;
}