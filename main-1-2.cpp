#include <iostream>
#include <stdlib.h>
#include <string>
#include "Person.h"

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
    Person a3(1000,"Sam");
    cout << "First Person a3 has name: " << a3.getName() << " and salary: " << a3.getSalary() << endl;
    a3.setName("Steven");
    a3.setSalary(2000);
    cout << "After changing it Person a3 has name: " << a3.getName() << " and salary: " << a3.getSalary() << endl;
    Person a4(0,"Luke");
    cout << "First Person a4 has name: " << a4.getName() << " and salary: " << a4.getSalary() << endl;
    a4.setName("Tom");
    a4.setSalary(10);
    cout << "After changing it Person a4 has name: " << a4.getName() << " and salary: " << a4.getSalary() << endl;

return 0;
}
