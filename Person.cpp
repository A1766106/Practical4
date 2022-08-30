#include "Person.h"
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

Person::Person(int mySalary, string myName)
{
    salary = mySalary;
    name = myName;
}

void Person::setName(string myName)
{
    name = myName;
}

string Person::getName()
{
    return name;
}

void Person::setSalary(int mySalary)
{
    salary = mySalary;
}

int Person::getSalary()
{
    return salary;
}