/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgursoy <bgursoy@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:45:40 by bgursoy           #+#    #+#             */
/*   Updated: 2024/02/02 15:44:58 by bgursoy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <ctype.h>

class Contact
{
    private:
        std::string name;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;
        int index;
    public:
        void    designSearch();
        void    add_attr(int p_count);
        void    more_info(int p_count);
        std::string stringlimit(std::string str) const;

};

class Phonebook
{
    private:
      Contact people[8];
    public:
        int p_count;
        void    add();
        void    search();        
};

#endif