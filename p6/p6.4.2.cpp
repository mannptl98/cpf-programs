#include <iostream>
using namespace std;
int main()
{
    int a[10], b[10], merged[20], n1, n2, i, j, k;

    cout << "HOW MANY ELEMENTS OF ARRAY A:" << endl;
    cin >> n1;
    cout << "HOW MANY ELEMENTS OF ARRAY B:" << endl;
    cin >> n2;

    for (i = 0; i < n1; i++)
    {
        cout << "ENTER ELEMENTS OF ARRAY A:" << endl;
        cin >> a[i];
    }
    for (j = 0; j < n2; j++)
    {
        cout << "ENTER ELEMENTS OF ARRAY B:" << endl;
        cin >> b[j];
    }
    i = 0;
    j = 0;
    k = 0;

    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            merged[k] = a[i];
            i++;
        }
        else
        {
            merged[k] = b[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        merged[k] = a[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        merged[k] = b[j];
        j++;
        k++;
    }

    cout << "array a" << endl;

    for (i = 0; i < n1; i++)
    {
        cout << a[i] << " " << endl;
    }
    cout << "array b" << endl;
    for (j = 0; j < n2; j++)
    {
        cout << b[j] << " " << endl;
    }
    cout << "sorted array" << endl;
    for (k = 0; k < (n1 + n2); k++)
    {
        cout << merged[k] << " ";
    }
    cout << "AUTHOR: MANN PATEL";
    return 0;
}