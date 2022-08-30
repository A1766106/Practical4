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
    }
}

bool Wagon::addCapybara(Capybara newCapy)
{
    if(count<4)
    {
        str[count] = newCapy.getName();
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
    else
    {
        cout << "Wagon is now empty" << endl;
    }
    for(int i=0;i<4;i++)
    {
        str[i] = "";
    }
    count = 0;

}

void Wagon::printCapybaras()
{
    for(int i=0;i<4;i++)
    {
        cout << str[i] << endl;
    }
}