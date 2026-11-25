#include <iostream>
using namespace std;
void memory()
{
    int a = 10;
    int *p = new int(250);

    int x = 50;

    cout << "************************************" << endl;
    cout << "   MEMORY ORGANIZATION ANALYZER     " << endl;
    cout << "************************************" << endl;

    cout << "------------STACK MEMORY------------" << endl;

    cout << "LOCAL VARIABLE VALUE" << endl;
    cout << a << endl;
    cout << "MEMORY ADDRESS" << endl;
    cout << &a << endl;

    cout << "-----------------------------------" << endl;

    cout << "-----DYNAMICALLY ALLOTED MEMORY------" << endl;

    cout << "ALLOCATED VALUE" << endl;
    cout << *p << endl;

    cout << "MEMORY ADDRESS" << endl;
    cout << p << endl;

    cout << "-----------------------------------" << endl;
    delete p;
}

void multilevel()
{
    int x = 50;
    int *p = &x;
    int **pp = &p;
    int ***ppp = &pp;

    cout << "-------MULTI-LEVEL REFERENCING-------" << endl;

    cout << "ORIGINAL VALUE" << endl;
    cout << x << endl;

    cout << "SINGLE LEVEL ADDRESS" << endl;
    cout << p << endl;

    cout << "DOUBLE LEVEL ADDRESS" << endl;
    cout << pp << endl;

    cout << "TRIPLE LEVEL ADDRESS" << endl;
    cout << ppp << endl;

    cout << "VALUE ACCESSED THROUGH THREE LEVELS" << endl;
    cout << ***ppp << endl;

    cout << "-----------------------------------" << endl;
    delete p;
    delete pp;
    delete ppp;
}

void memorysafety()
{
    cout << "--------MEMORY SAFETY--------" << endl;

    int *nullPtr = NULL;
    cout << "NULL REFERENCE" << endl;
    if (nullPtr == NULL)
    {
        cout << "SAFE (REFERENCE IS NULL)" << endl;
    }
    else
    {
        cout << "UNSAFE" << endl;
    }
    cout << "------------------------------------" << endl;

    int *ptr = new int(100);
    cout << "INVALID REFERENCE" << endl;
    delete ptr;
    cout << "MEMORY RELEASED SUCCESSFULLY" << endl;
    cout << "REFERENCE INVALID" << endl;
    ptr = NULL;

    cout << "------------------------------" << endl;

    int *uniptr;
    cout << "UNINTIALIZED ADDRESS VARIABLE" << endl;
    cout << "UNSAFE TO ACCESS" << endl;
}

int main()
{
    memory();
    multilevel();
    memorysafety();
    cout << "AUTHOR: MANN PATEL";
    return 0;
}