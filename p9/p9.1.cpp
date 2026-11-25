#include <iostream>
#include <string>
using namespace std;
void address()
{
    int a = 25;
    char b = 'A';
    float c = 85.60;

    cout << "*****************************************" << endl;
    cout << "        MEMORY ADDRESS EXPLORER          " << endl;
    cout << "*****************************************" << endl;

    cout << "----------VARIABLE INFORMATION-----------" << endl;

    cout << "INTERGER VALUE   :" << a << endl;
    cout << "MEMORY ADDRESS   :" << &a << endl;

    cout << "---------------------------------------" << endl;

    cout << "CHARACTER VALUE  :" << b << endl;
    cout << "MEMORY ADDRESS   :" << (void *)&b << endl;

    cout << "---------------------------------------" << endl;

    cout << "FLOATING VALUE   :" << c << endl;
    cout << "MEMORY ADDRESS   :" << &c << endl;

    cout << "---------------------------------------" << endl;
}

int main()
{
    address();
    cout << "AUTHOR: MANN PATEL";
    return 0;
}