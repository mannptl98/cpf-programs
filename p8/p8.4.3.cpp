#include <iostream>
using namespace std;

void binary(int n)
{
    if (n <= 1)
    {
        cout << n;
        return;
    }
    else
    {
        binary(n / 2);
        cout << n % 2;
    }
}

int main()
{
    int n;
    cout << "Enter decimal number:";
    cin >> n;

    binary(n);

    return 0;
}