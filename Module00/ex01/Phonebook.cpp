/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouchel <hbouchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 17:45:34 by hbouchel          #+#    #+#             */
/*   Updated: 2025/02/18 17:46:02 by hbouchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

Phonebook::Phonebook() : contact_count(0){}

void Phonebook::addContact(const Contact &newContact){
    if(contact_count >= 7)
        contact_count = 0;
    this->contacts[contact_count] = newContact;
    contact_count++;

    std::cout << "Contact ajouté à l'index ";
    std::cout << contact_count << std::endl;
}

void Phonebook::search(void){
    std::string index_string;
    std::stringstream ss;
    int index;

    std::cout << "Entrez un indice de contact pour plus d'infos : ";
    std::getline(std::cin, index_string);
    ss << index_string;
    ss >> index;

    if(ss.fail()){
        std::cout << "Nombres entiers seulement" << std::endl;
        ss.clear();
        return;
    }
    index = index - 1;
    if(contacts[index].getFirstName().empty()){
        std::cout << "Aucun contact trouvé à ce numéro" << std::endl;
        ss.clear();
        return;
    }
    display_infos(index);
    return;
}

void Phonebook::display_infos(int index){
    std::cout << "First name   : " << contacts[index].getFirstName() << std::endl;
    std::cout << "Last name    : " << contacts[index].getLastName() << std::endl;
    std::cout << "Phone number : " << contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Nickname     : " << contacts[index].getNickname() << std::endl;
    std::cout << "Darkest      : " << contacts[index].getDarkest() << std::endl;
    return;
}

void Phonebook::list(void){
    std::string first_name, last_name, nickname;
    size_t max_size = 10;
    size_t index = 0;

    std::cout << "|---------|----------|----------|----------|" << std::endl;
    std::cout << "|  index  |first name|last name |nick name |" << std::endl;
    std::cout << "|---------|----------|----------|----------|" << std::endl;

    while(index < CONTACTS_LIMIT){
        first_name = this->contacts[index].getFirstName();
        last_name = this->contacts[index].getLastName();
        nickname = this->contacts[index].getNickname();

        if(first_name.size() > max_size)
            first_name = first_name.substr(0, max_size - 1) + '.';
        if(last_name.size() > max_size)
            last_name = last_name.substr(0, max_size - 1) + '.';
        if(nickname.size() > max_size)
            nickname = nickname.substr(0, max_size - 1) + '.';
        
        std::cout << "|" << std::left << std::setw(10) << index + 1;
        std::cout << "|" << std::left << std::setw(10) << first_name;
        std::cout << "|" << std::left << std::setw(10) << last_name;
        std::cout << "|" << std::left << std::setw(10) << nickname << "|" << std::endl;
        std::cout << "|---------|----------|----------|----------|" << std::endl;

        index++;
    }
    std::cout << std::endl;
    return;
}