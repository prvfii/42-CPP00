#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(int ac, char **av)
{
    PhoneBook   phoneBook;
    std::string cmd;
    int     ok  = 0;

    while (ok == 0)
    {
        std::cout << "Entrez une commande (ADD, SEARCH, EXIT) : ";
        if (!std::getline(std::cin, cmd))
        {
            if (std::cin.eof()) {
                std::cin.clear();
                std::cout << "\nEntrée interrompue. Relancez le phonebook" << std::endl;
                ok = 1;
            }
            continue;
        }
        if (cmd == "ADD")
        {
            Contact newContact;
            std::string input;
            
            std::cout << "First Name : ";
            if (!std::getline(std::cin, input) || input.empty()) { std::cout << "Le champ ne peut pas être vide !\n"; continue; }
            if (!newContact.onlyChars(input)) { std::cout << "Il doit y avoir que des lettres !\n"; continue; }
            newContact.setFirstName(input);

            std::cout << "Last Name : ";
            if (!std::getline(std::cin, input) || input.empty()) { std::cout << "Le champ ne peut pas être vide !\n"; continue; }
            if (!newContact.onlyChars(input)) { std::cout << "Il doit y avoir que des lettres !\n"; continue; }
            newContact.setLastName(input);
            
            std::cout << "Nickname: ";
            if (!std::getline(std::cin, input) || input.empty()) { std::cout << "Le champ ne peut être vide!\n"; continue; }
            newContact.setNickName(input);

            std::cout << "Phone Number: ";
            if (!std::getline(std::cin, input) || input.empty()) { std::cout << "Le champ ne peut être vide!\n"; continue; }
            if (newContact.onlyChars(input)) { std::cout << "Il doit y avoir que des chiffres !\n"; continue; }
            newContact.setPhoneNumber(input);

            std::cout << "Darkest Secret: ";
            if (!std::getline(std::cin, input) || input.empty()) { std::cout << "Le champ ne peut être vide!\n"; continue; }
            newContact.setDarkestSecret(input);

            phoneBook.addContact(newContact);
            std::cout << "Contact ajouté avec succès !" << std::endl;
            
        }
        else if (cmd == "SEARCH")
        {
            phoneBook.searchContact();
        }
        else if (cmd == "EXIT")
        {
            ok = 1;
            break;
        }
        else
        {
            continue;
        }
    }
    return 0;
};


