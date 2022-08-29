#include "Capybara.h"
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

Capybara::Capybara()
{
    name = "None Given";
    age = 0;
}

void Capybara::setName(string capyName)
{
    name = capyName;
}

string Capybara::getName()
{
    return name;
}

void Capybara::setAge(int capyage)
{
    age = capyage;
}

int Capybara::getAge()
{
    return age;
}
