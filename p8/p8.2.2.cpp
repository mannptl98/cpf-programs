#include <iostream>
using namespace std;
int call_value(int n);
int call_reference(int *p);
int main()
{
    int a = 10;
    cout << "value of a:" << a << endl;
    call_value(a);
    cout << "value of a:" << a << endl;
    call_reference(&a);
    cout << "AUTHOR: MANN PATEL";
    return 0;
}
int call_value(int n)
{
    cout << "value of n:" << n << endl;
    n = n + 10;
    cout << "value of n:" << n << endl;
}
int call_reference(int *p)
{
    cout << "*p=" << *p << endl;
    *p = *p + 2;
    cout << "*p=" << *p;
}