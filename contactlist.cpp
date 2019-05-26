
// This file contains function definitions for Contact and ContactList classes
// Last updated: 04/09/2019

#include "contactlist.h"

void ContactList::add(Contact c) {
    cList.append(c);
}
void ContactList::remove(Contact c) {
    int i = 0;
    while (QString::compare(cList[i].toString(), c.toString(),
                            Qt::CaseSensitive) != 0)
        i++;
        if (QString::compare(cList[i].toString(), c.toString(),
                             Qt::CaseSensitive) == 0) {
            cList.removeAt(i);
        }
}
QStringList ContactList::getPhoneList(int category) {
    QStringList phoneList;
    for (Contact a : cList) {
        if (a.category == category) {
            phoneList.append(a.phoneNumber+"\t");
        }
    }
    phoneList.prepend("Phone List: ");
    phoneList.prepend("-------------------------------------------\n");
    phoneList.append("\n");
    return phoneList;
}
QStringList ContactList::getMailingList(int category) {
    QStringList mailingList;
    for (Contact a : cList) {
        if (a.category == category) {
            mailingList.append(a.streetAddress + ", " +
                               a.zipCode + ", " +
                               a.city + "\t");
        }
    }
    mailingList.prepend("Mail List: ");
    mailingList.prepend("-------------------------------------------\n");
    mailingList.append("\n");
    return mailingList;
}
