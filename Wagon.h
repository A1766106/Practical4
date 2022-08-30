#ifndef WAGON_H
#define WAGON_H
#include <iostream>
#include <stdlib.h>
#include <string>
#include "Capybara.h"

using namespace std;

class Wagon
{
    public:
        string str[4];
        int count;
        Wagon();                               // create an empty wagonobject
        bool addCapybara(Capybara newCapy);    // adds a Capybara to the wagon, returns false if full
        void emptyWagon();                     // remove all Capybaras from the wagon
        void printCapybaras();                 // print the name, a space, the age, then a new line
                                                // for each capybara in the order they were added  
};

#endif