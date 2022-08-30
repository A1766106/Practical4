#include <iostream>
#include <stdlib.h>
#include <string>
#include "Capybara.h"
#include "Wagon.h"

using namespace std;

int main()
{
    Wagon b1;
    Capybara a1, a2, a3, a4, a5;
    a1.setName("Max");
    a1.setAge(18);
    cout << "Name: " << a1.getName() << " Age: " << a1.getAge() << endl;
    a2.setName("Maxwell");
    a2.setAge(19);
    cout << "Name: " << a2.getName() << " Age: " << a2.getAge() << endl;
    a3.setName("Sam");
    a3.setAge(20);
    cout << "Name: " << a3.getName() << " Age: " << a3.getAge() << endl;
    a4.setName("Jack");
    a4.setAge(21);
    cout << "Name: " << a4.getName() << " Age: " << a4.getAge() << endl;
    a5.setName("Steve");
    a5.setAge(50);
    cout << "Name: " << a5.getName() << " Age: " << a5.getAge() << endl;
    cout << b1.addCapybara(a1) << endl;
    cout << b1.addCapybara(a2) << endl;
    cout << b1.addCapybara(a3) << endl;
    cout << b1.addCapybara(a4) << endl;
    cout << b1.addCapybara(a5) << endl;
    b1.printCapybaras();

    return 0;
}