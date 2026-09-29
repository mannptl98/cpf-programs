#include <iostream>
using namespace std;
int main()
{
    string enrollment_number, student_name, branch;
    int semester, maths, physics, cpf, total_marks;
    long long mobile_number;
    float average, percentage;

    cout << "************************************" << endl;
    cout << "  STUDENT RECORD MANAGEMENT SYSTEM  " << endl;
    cout << "************************************" << endl;

    cout << "Software-version:1.2" << endl;

    cout << "-------------------------------------" << endl;
    cout << "         STUDENT REGISTRATION        " << endl;
    cout << "-------------------------------------" << endl;

    cout << "ENTER STUDENT ENROLLMENT NUMBER:" << endl;
    cin >> enrollment_number;
    cout << "ENTER STUDENT NAME:" << endl;
    cin >> student_name;
    cout << "ENTER BRANCH:" << endl;
    cin >> branch;
    cout << "ENTER SEMESTER:" << endl;
    cin >> semester;
    cout << "ENTER MOBILE NUMBER:" << endl;
    cin >> mobile_number;

    cout << "-------------------------------------" << endl;
    cout << "        ACADEMIC INFORMATION         " << endl;
    cout << "-------------------------------------" << endl;

    cout << "ENTER MATHS MARKS:" << endl;
    cin >> maths;
    cout << "ENTER PHYSICS MARKS:" << endl;
    cin >> physics;
    cout << "ENTER CPF MARKS:" << endl;
    cin >> cpf;

    cout << "-------------------------------------" << endl;
    cout << "         ACADEMIC SUMMARY:           " << endl;
    cout << "-------------------------------------" << endl;

    total_marks = maths + physics + cpf;
    average = total_marks / 3.00;
    percentage = total_marks / 3.00;

    cout << "TOTAL MARKS:" << total_marks << endl;
    cout << "AVERAGE    :" << average << endl;
    cout << "PERCENTAGE :" << percentage << endl;

    cout << "-------------------------------------" << endl;
    cout << "       STUDENT INFORMATION           " << endl;
    cout << "-------------------------------------" << endl;

    cout << "ENROLLMENT NUMBER:" << enrollment_number << endl;
    cout << "STUDENT NAME     :" << student_name << endl;
    cout << "BRANCH           :" << branch << endl;
    cout << "SEMESTER         :" << semester << endl;
    cout << "MOBILE NUMBER    :" << mobile_number << endl;
    cout << "AUTHOR: MANN PATEL";
    return 0;
}