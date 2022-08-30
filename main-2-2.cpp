#include "Airplane.h"
#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
     Person a1(100,"Max");
    cout << "First Person a1 has name: " << a1.getName() << " and salary: " << a1.getSalary() << endl;
    a1.setName("Steven");
    a1.setSalary(200);
    cout << "After changing it Person a1 has name: " << a1.getName() << " and salary: " << a1.getSalary() << endl;
    Person a2(120,"Maxwell");
    cout << "First Person a2 has name: " << a2.getName() << " and salary: " << a2.getSalary() << endl;
    a2.setName("Jack");
    a2.setSalary(250);
    cout << "After changing it Person a2 has name: " << a2.getName() << " and salary: " << a2.getSalary() << endl;
    Airplane b1("Yehaw", a1, a2);
    b1.printDetails();

    return 0;
}