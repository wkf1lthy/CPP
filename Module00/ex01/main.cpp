/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouchel <hbouchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 17:46:12 by hbouchel          #+#    #+#             */
/*   Updated: 2025/02/26 19:46:46 by hbouchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.hpp"
#include "Phonebook.hpp"

void search_module(Phonebook &pb){
    pb.list();
    pb.search();
    return ;
}

void create_contact(Phonebook &pb){
    Contact newContact;
    std::string input;

    std::cout << "first name : ";
    std::getline(std::cin, input);
    if(input.empty()){
        std::cout << "This cant be left empty" << std::endl;
        return ;
    }
    newContact.setFirstName(input);

    std::cout << "last name : ";
    std::getline(std::cin, input);
    if(input.empty()){
        std::cout << "This cant be left empty" << std::endl;
        return ;
    }
    newContact.setLastName(input);

    std::cout << "nickname : ";
    std::getline(std::cin, input);
    if(input.empty()){
        std::cout << "This cant be left empty" << std::endl;
        return ;
    }
    newContact.setNickname(input);

    std::cout << "phone number : ";
    std::getline(std::cin, input);
    for(int i = 0; input[i]; i++){
        if(!isdigit(input[i])){
            std::cout << "Invalid phone number, please retry" << std::endl;
            return;
        }
    }
    if(input.empty()){
        std::cout << "This cant be left empty" << std::endl;
        return ;
    }
    newContact.setPhoneNumber(input);

    std::cout << "darkest : ";
    std::getline(std::cin, input);
    if(input.empty()){
        std::cout << "This cant be left empty" << std::endl;
        return ;
    }
    newContact.setDarkest(input);

    pb.addContact(newContact);
}

int main(void){
    Phonebook pb;
    std::string command;

    while(1){
        std::cout << "Enter a command (ADD, SEARCH, EXIT) : ";
        std::getline(std::cin, command);
        if(std::cin.eof())
            return(0);
        if(command == "ADD")
            create_contact(pb);
        else if (command == "SEARCH")
            search_module(pb);
        else if (command == "EXIT")
            break;
        else 
            std::cout << "INVALID COMMAND ! " << std::endl;
    }
    return (0);
}
