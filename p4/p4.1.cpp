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

    if (percentage < 33)
    {
        cout << "RESULT=FAIL" << endl;
    }
    else
    {
        cout << "RESULT=PASS" << endl;
    }
    cout << "AUTHOR: MANN PATEL";
    return 0;
}