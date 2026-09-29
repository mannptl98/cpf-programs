#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i, marks[5], total_marks = 0;
    float average = 0, percentage = 0;
    for (i = 0; i < 5; i++)
    {
        cout << "ENTER MARKS:" << endl;
        cin >> marks[i];
    }
    for (i = 0; i < 5; i++)
    {
        cout << "marks:" << marks[i] << endl;
    }
    for (i = 0; i < 5; i++)
    {

        total_marks = total_marks + marks[i];
    }
    average = total_marks / 5.00;
    percentage = total_marks / 5.00;

    cout << "TOTAL MARKS:" << total_marks << endl;
    cout << "AVERAGE    :" << average << endl;
    cout << "PERCENTAGE :" << percentage << endl;

    if (percentage > 90 && percentage <= 100)
    {
        cout << "RESULT     =PASS" << endl;
        cout << "GRADE      =O" << endl;
        cout << "PERFORMANCE=OUTSTANDING" << endl;
    }
    else if (percentage > 80 && percentage <= 90)
    {
        cout << "RESULT     =PASS" << endl;
        cout << "GRADE      =A+" << endl;
        cout << "PERFORMANCE=EXCELLENT" << endl;
    }
    else if (percentage > 70 && percentage <= 80)
    {
        cout << "RESULT     =PASS" << endl;
        cout << "GRADE      =A" << endl;
        cout << "PERFORMANCE=VERY GOOD" << endl;
    }
    else if (percentage > 60 && percentage <= 70)
    {
        cout << "RESULT     =PASS" << endl;
        cout << "GRADE      =B+" << endl;
        cout << "PERFORMANCE=GOOD" << endl;
    }
    else if (percentage > 50 && percentage <= 60)
    {
        cout << "RESULT     =PASS" << endl;
        cout << "GRADE      =B" << endl;
        cout << "PERFORMANCE=SATISFACTORY" << endl;
    }
    else if (percentage > 40 && percentage <= 50)
    {
        cout << "RESULT     =PASS" << endl;
        cout << "GRADE      =C" << endl;
        cout << "PERFORMANCE=NEEDS IMPROVEMENT" << endl;
    }
    else
    {
        cout << "RESULT=FAILED";
    }
    cout << "AUTHOR: MANN PATEL";
    return 0;
}