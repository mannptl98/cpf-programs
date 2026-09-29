#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a[3][3], b[3][3], i, j, m, n, r[3][3], k;

    cout << "********************************************" << endl;
    cout << "           MATRIX MALTIPLICATION            " << endl;
    cout << "********************************************" << endl;

    cout << "ENTER VALUES OF ROWS AND COLS:" << endl;
    cin >> m >> n;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "ENTER ELEMENTS OF MATRIX A:" << endl;
            cin >> a[i][j];
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "ENTER ELEMENTS OF MATRIX B:" << endl;
            cin >> b[i][j];
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            r[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                r[i][j] = r[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << r[i][j] << " ";
        }
        cout << endl;
    }
    cout << "AUTHOR: MANN PATEL";
    return 0;
}
