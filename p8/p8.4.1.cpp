#include <iostream>
using namespace std;
int display1(int n1);
int display2(int n1, int n2);
int main()
{
    int a, b;
    cout << "ENTER VALUE OF A:" << endl;
    cin >> a;
    cout << "ENTER VALUE OF B:" << endl;
    cin >> b;
    display1(a);
    display2(a, b);
    cout << "AUTHOR: MANN PATEL";
}
int display1(int n1)
{
    if (n1 <= 0)
    {
        return 0;
    }
    else
    {
        cout << n1 << " ";
        display1(n1 - 1);
    }
    cout << endl;
}
int display2(int n1, int n2)
{
    if (n1 <= 0)
    {
        return 0;
    }
    if (n2 <= n1)
    {
        cout << n2 << " ";
        display2(n1, n2 + 1);
    }
}
