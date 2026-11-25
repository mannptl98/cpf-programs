#include <iostream>
using namespace std;
int parking();
int parking(int charge, int hour);
int parking(double a, double b);
int main()
{
    int charge1, hour1;
    double charge2, hour2;
    parking();
    cout << "ENTER CHARGE1:" << charge1 << endl;
    cin >> charge1;
    cout << "ENTER HOUR1:" << hour1 << endl;
    cin >> hour1;
    parking(charge1, hour1);
    cout << "ENTER CHARGE2:" << charge2 << endl;
    cin >> charge2;
    cout << "ENTER HOUR2:" << hour2 << endl;
    cin >> hour2;
    parking(charge2, hour2);
    cout << "AUTHOR: MANN PATEL";
}
int parking()
{
    int c1, h, total;
    cout << "ENTER CHARGE:" << c1 << endl;
    cin >> c1;
    cout << "ENTER HOUR:" << h << endl;
    cin >> h;
    total = c1 * h;
    cout << "TOTAL=" << total;
}
int parking(int charge, int hour)
{
    int total1;
    total1 = charge * hour;
    cout << "total1=" << total1;
    return 0;
}
int parking(double a, double b)
{
    double total2;
    total2 = a * b;
    cout << "TOTAL2=" << total2;
    return 0;
}