
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#define CONTACTS_LIMIT 8

#include "Contact.hpp"
#include <iostream>
#include <string>

class Phonebook{

    private:
        Contact contacts[CONTACTS_LIMIT];
        int contact_count;
    
    public:
        Phonebook();
        void addContact(const Contact &newContact);
        void list(void);
        void search(void);
        void display_infos(int index);
};

#endif
