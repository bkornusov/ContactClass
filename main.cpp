
// This file contains client code
// Last updated: 04/09/2019

#include "contactfactory.h"
#include "contactlist.h"

static QTextStream cout(stdout);

int main() {
    ContactList contList;
    Contact a(1,"Batyr","Kornusov","MySt.","3441","Boston","8902444506203");
    cout << a.toString();
    contList.add(a);
    //create ten random contacts
    for (int i = 0; i < 10; i++) {
        contList.add(contactFactory().createNew());
    }
    cout << contList.cList[1].toString();
    QString phoneList = contList.getPhoneList(4).join("");
    QString mailList = contList.getMailingList(4).join("");
    cout << phoneList;
    cout << mailList;
    //remove the first contact we added
    //now the 0th contact should be the first random generated one
    contList.remove(a);
    cout << contList.cList[0].toString();
    return 0;
}
