#include "Wagon.h"
#include "Capybara.h"
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

Wagon::Wagon()
{
    count = 0;
    for(int i=0;i<4;i++)
    {
        str[i] = "";
        age[i] = 0;
    }
}

bool Wagon::addCapybara(Capybara newCapy)
{
    if(count<4)
    {
        str[count] = newCapy.getName();
        age[count] = newCapy.getAge();
        count++;
        return true;

    }
    return false;
    
}

void Wagon::emptyWagon()
{

    if(count == 0)
    {
        cout << "Wagon was empty" << endl;
    }
    // else
    // {
    //     cout << "Wagon is now empty" << endl;
    // }
    count = 0;
    for(int i = 0;i<4;i++)
    {
        str[i] = "";
        age[i] = 0;
    }

}

void Wagon::printCapybaras()
{
    for(int i=0;i<count;i++)
    {
        cout << str[i] << " " << age[i] << endl;;
    }
}