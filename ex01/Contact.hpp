/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimazouz <fimazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 22:22:14 by firdawssema       #+#    #+#             */
/*   Updated: 2024/11/05 13:52:16 by fimazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact 
{
    public:
            void    setFirstName(const std::string &firstName);
            std::string getFirstName() const;

            void    setLastName(const std::string &lastName);
            std::string getLastName() const;

            void    setNickName(const std::string &nickName);
            std::string getNickName() const;

            void    setPhoneNumber(const std::string &phoneNumber);
            std::string getPhoneNumber() const;

            void    setDarkestSecret(const std::string &darkestSecret);
            std::string getDarkestSecret() const;

            void displayContact() const;
            bool onlyChars(const std::string& str);
            static bool isChar(unsigned char c);
    private:
            std::string firstName;
            std::string lastName;
            std::string nickName;
            std::string phoneNumber;
            std::string darkestSecret;
};

#endif