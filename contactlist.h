#ifndef CONTACTLIST_H
#define CONTACTLIST_H

// This file contains the contactlist class and its functions declarations
// Last updated: 04/09/2019

#include "contact.h"

class ContactList {
public:
    QList<Contact> cList;
    ContactList() {
        srand(time(nullptr));
    }
    void add(Contact c);
    void remove(Contact c);
    QStringList getPhoneList(int category);
    QStringList getMailingList(int category);
};

#endif // CONTACTLIST_H
