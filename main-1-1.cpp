#include <iostream>
#include <stdlib.h>
#include <string>
#include "Capybara.h"

using namespace std;

int main()
{
    Capybara a1, a2, a3, a4;
    a1.setName("Max");
    a1.setAge(18);
    cout << "Name: " << a1.getName() << " Age: " << a1.getAge() << endl;
    a2.setName("Maxwell");
    a2.setAge(19);
    cout << "Name: " << a2.getName() << " Age: " << a2.getAge() << endl;
    a3.setName("Sam");
    a3.setAge(20);
    cout << "Name: " << a3.getName() << " Age: " << a3.getAge() << endl;
    a1.setName("Jack");
    a1.setAge(21);
    cout << "Name: " << a4.getName() << " Age: " << a4.getAge() << endl;

    return 0;
}