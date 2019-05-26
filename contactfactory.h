#ifndef CONTACTFACTORY_H
#define CONTACTFACTORY_H

// This file contains the contactfactory class and its functions
// Last updated: 04/09/2019

#include "contactlist.h"

static QStringList nameList = {"John", "Luke","Alec","Avery","Shane",
                               "Adam","Griffin","Joseph","Amilcar","Tyler",
                               "Anna","Susan","Mary","Linda","Maria",
                               "Vladimir"};
static QStringList lastNameList = {"Smith","Johnson","Walters",
                                   "Rogers","Stewart","Stark",
                                    "Black","Joestar","Rivera",
                                   "Wilson","Kornusov","Putin"};
static QStringList cityList = {"New York","Boston","Los Angeles",
                               "Moscow","Istanbul","Tokyo",
                                "Bejing","Seekonk","Natick",
                               "Cairo","Morioh","Elista"};
static QStringList addressList = {"Commonwealth Ave.","Park St.",
                                  "Pioneer St.","Washington St.",
                                    "New St.","Somename St.",
                                        "Random St."};

class contactFactory {

public:
    contactFactory() {
    }
    int randint(int Min, int Max) {
        return std::rand() % (Max + 1 - Min) + Min;
    }
    long randlong(long Min, long Max) {
        return std::rand() % (Max + 1 - Min) + Min;
    }

    Contact createNew() {
        int category = randint(0,5);
        QString name = nameList[randint(0,14)];
        QString last = lastNameList[randint(0,11)];
        QString address = addressList[randint(0,6)];
        QString zip = QString::number(randint(10000,9999999));
        QString city = cityList[randint(0,11)];
        QString phone = QString::number(randlong(1000000000,9999999999));

        return Contact(category,name,last,address,zip,city,phone);
    }
};

#endif // CONTACTFACTORY_H
