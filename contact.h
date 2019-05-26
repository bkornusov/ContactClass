#ifndef CONTACT_H
#define CONTACT_H

// Batyr Kornusov Homework assignment 3
// This file contains the Contact class with function definitions
// Last updated: 04/09/2019
// Program works when compiled through qt creator
// Does not compile using qmake on console

#include <QTextStream>
#include <QString>

class Contact {
private:
   QString firstName;
   QString lastName;
public:
   int category;
   QString streetAddress;
   QString zipCode;
   QString city;
   QString phoneNumber;
   Contact() {
       firstName = "Name";
       lastName = "Surname";
       streetAddress = "address";
       zipCode = "00000";
       city = "city";
       phoneNumber = "000";
   }
   Contact(int cat,
           QString name,
           QString last,
           QString address,
           QString zip,
           QString c,
           QString number)
   {
       category = cat;
       firstName = name;
       lastName = last;
       streetAddress = address;
       zipCode = zip;
       city = c;
       phoneNumber = number;
   }
   QString toString() {
       QString cat = QString::number(category);
       QString separator = "-------------------------------------------\n";
       QString returnString = QString("Category: %1\n"
                           "Name: %2 %3\n"
                           "Address: %4, %5, %6\n"
                           "Phone: %7 \n").arg(cat,
                                           firstName, lastName,
                                           streetAddress, zipCode, city,
                                           phoneNumber);
       return separator + returnString;
   }
};

#endif // CONTACT_H

