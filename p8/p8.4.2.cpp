#include <iostream>
using namespace std;
int sum(int n, int add);
int main()
{
    int a;
    cout << "ENTER A:" << endl;
    cin >> a;
    int addt = sum(a, 0);
    cout << "sum=" << addt;
    return 0;
}
int sum(int n, int add)
{
    if (n <= 0)
    {
        return add;
    }
    else
    {
        int digit;
        digit = n % 10;
        add = add + digit;
        cout << digit << " ";
        return sum(n / 10, add);
    }
}