#include <iostream>
using namespace std;
int main()
{
    int maths, physics, cpf, total_marks;
    float average, percentage;

    cout << "**************************************" << endl;
    cout << "   STUDENT RECORD MANAGEMENT SYSTEM   " << endl;
    cout << "**************************************" << endl;

    cout << "ENTER MATHS MARKS:" << endl;
    cin >> maths;
    cout << "ENTER PHYSICS MARKS:" << endl;
    cin >> physics;
    cout << "ENTER CPF MARKS:" << endl;
    cin >> cpf;

    total_marks = maths + physics + cpf;
    average = total_marks / 3.00;
    percentage = total_marks / 3.00;

    cout << "------------------------------------" << endl;
    cout << "          ACADEMIC RESULT           " << endl;
    cout << "------------------------------------" << endl;

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