#include "Airplane.h"
#include "Person.h"
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std; 

Airplane::Airplane(string given_callsign, Person given_thePilot, Person given_theCoPilot)
{
    callsign = given_callsign;
    thePilot = given_thePilot;     
    theCoPilot = given_theCoPilot;
}

void Airplane::setPilot(Person given_thePilot)
{
    thePilot = given_thePilot;
}

Person Airplane::getPilot()
{
    return thePilot;
}

void Airplane::setCoPilot(Person given_theCoPilot)
{
    theCoPilot = given_theCoPilot;
}

Person Airplane::getCoPilot()
{
    return theCoPilot;
}

void Airplane::printDetails()
{
    cout << callsign << endl;
    cout << thePilot.getName() << endl;
    cout << theCoPilot.getName() << endl;
}
