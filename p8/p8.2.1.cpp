#include <iostream>
using namespace std;
void addition();
int subtraction();
void multiplication(int a, int b);
int division(int a, int b);
int main()
{
    int n1, n2, n3, n4;
    addition();
    int subt = subtraction();
    cout << subt;
    cout << "ENTER VALUE OF N1:" << endl;
    cin >> n1;
    cout << "ENTER VALUE OF N2:" << endl;
    cin >> n2;
    multiplication(n1, n2);
    cout << "ENTER VALUE OF N3:" << endl;
    cin >> n3;
    cout << "ENTER VALUE OF N4:" << endl;
    cin >> n4;
    int divt = division(n3, n4);
    cout << divt;
    cout << "AUTHOR: MANN PATEL";
}
void addition()
{
    int n1, n2, add;
    cout << "ENTER VALUE OF N1:" << endl;
    cin >> n1;
    cout << "ENTER VALUE OF N2:" << endl;
    cin >> n2;
    add = n1 + n2;
    cout << "ADDITION=" << add;
}
int subtraction()
{
    int n1, n2;
    int sub;
    cout << "ENTER VALUE OF N1:" << endl;
    cin >> n1;
    cout << "ENTER VALUE OF N2:" << endl;
    cin >> n2;
    sub = n1 - n2;
    return sub;
}
void multiplication(int a, int b)
{
    int mul;
    mul = a * b;
    cout << "MULTIPLICATION=" << mul;
}
int division(int a1, int b1)
{
    int div;
    div = a1 / b1;
    return div;
}
