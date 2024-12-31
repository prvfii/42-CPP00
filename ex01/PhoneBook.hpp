/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimazouz <fimazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:59:26 by firdawssema       #+#    #+#             */
/*   Updated: 2024/10/31 18:10:40 by fimazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook 
{
    public:
            PhoneBook();
            void addContact(const Contact &contact);
            void searchContact() const;
            std::string truncate(const std::string &str) const;
    private:
            Contact     contacts[8];
            int         contactIndex;
};

#endif