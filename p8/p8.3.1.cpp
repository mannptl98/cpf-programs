#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

int fact1(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
        f = f * i;
    return f;
}

void fb(int n, int a, int b)
{
    if (n <= 0)
        return;
    else
    {
        cout << a << " ";
        fb(n - 1, b, a + b);
    }
}

int main()
{
    int n, a = 0, b = 1;
    cout << "Enter n:";
    cin >> n;

    cout << "Iterative Factorial: " << fact1(n) << endl;
    cout << "Recursive Factorial: " << fact(n) << endl;

    cout << "Iterative Fibonacci: ";
    for (int i = 0; i < n; i++)
    {
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }

    cout << "\nRecursive Fibonacci: ";
    fb(n, 0, 1);
    cout << "AUTHOR: MANN PATEL";

    return 0;
}