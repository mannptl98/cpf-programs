#include <iostream>
using namespace std;
int main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << char(96 + j) << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << char(64 + j) << " ";
        }
        cout << endl;
    }

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5 - i; j++)
        {
            cout << "  ";
        }
        for (k = 1; k <= i; k++)
        {
            cout << k << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << k << " ";
        }
        for (int l = i - 1; l > 0; l--)
        {
            cout << l << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << char('A' + k - 1) << " ";
        }
        for (int l = i - 1; l > 0; l--)
        {
            cout << char('A' + l - 1) << " ";
        }
        cout << endl;
    }
    cout << "AUTHOR: MANN PATEL";
    return 0;
}
