#include "Wagon.h"
#include "Capybara.h"
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

Wagon::Wagon()
{}

bool Wagon::addCapybara(Capybara newCapy)
{
    if(count<5)
    {
        passengers[count+1] = newCapy;
        return true;

    }
    return false;
    
}

void Wagon::emptyWagon()
{

    if(count == 0)
    {
        cout << "Wagon is empty" << endl;
    }
    else
    {
        cout << "Wagon is not empty" << endl;
    }

}

void Wagon::printCapybaras()
{

}