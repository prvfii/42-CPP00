/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimazouz <fimazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:55:48 by firdawssema       #+#    #+#             */
/*   Updated: 2024/10/31 19:24:09 by fimazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    Contact::setFirstName(const std::string &firstName)
{
    this->firstName = firstName;
};

std::string Contact::getFirstName() const {
    return this->firstName;
};

void    Contact::setLastName(const std::string &lastName)
{
    this->lastName = lastName;
};

std::string Contact::getLastName() const {
    return this->lastName;
};

void    Contact::setNickName(const std::string &nickName)
{
    this->nickName = nickName;
};

std::string Contact::getNickName() const {
    return this->nickName;
};


void    Contact::setPhoneNumber(const std::string &phoneNumber)
{
    this->phoneNumber = phoneNumber;
};

std::string Contact::getPhoneNumber() const {
    return this->phoneNumber;
};


void    Contact::setDarkestSecret(const std::string &darkestSecret)
{
    this->darkestSecret = darkestSecret;
};

std::string Contact::getDarkestSecret() const {
    return this->darkestSecret;
};

void Contact::displayContact() const {
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickName << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
};

bool Contact::isChar(unsigned char c) {
    return std::isalpha(c);
};

bool Contact::onlyChars(const std::string& str) {
     return std::all_of(str.begin(), str.end(), isChar);
};
