/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimazouz <fimazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 22:36:05 by firdawssema       #+#    #+#             */
/*   Updated: 2024/11/05 14:41:48 by fimazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::addContact(const Contact &contact) {
    contacts[contactIndex % 8] = contact;
    contactIndex++;
};

void PhoneBook::searchContact() const {
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < 8; i++) {
        if (contacts[i].getFirstName().empty()) continue;

        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << truncate(contacts[i].getFirstName()) << "|"
                  << std::setw(10) << truncate(contacts[i].getLastName()) << "|"
                  << std::setw(10) << truncate(contacts[i].getNickName()) << std::endl;
    }

    int index;
    std::cout << "Entrez l'index du contact pour afficher les détails : ";
    if (!(std::cin >> index) || index < 0 || index >= 8 || contacts[index].getFirstName().empty()) {
        std::cout << "Index invalide." << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } else {
        contacts[index].displayContact();
    }
}

std::string PhoneBook::truncate(const std::string &str) const {
    return (str.length() > 10) ? str.substr(0, 9) + "." : str;
};

PhoneBook::PhoneBook() : contactIndex(0) {}