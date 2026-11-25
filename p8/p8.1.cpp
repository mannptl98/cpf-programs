#include <iostream>
using namespace std;
void displayHeader();
void acceptStudentDetails();
void calculateAcademicResult();
void displayStudentReport();
string enrollment_number, student_name, branch;
int semester, m1, m2, m3, m4, m5;
int total_marks;
float percentage;
int main()
{

    displayHeader();
    acceptStudentDetails();
    calculateAcademicResult();
    displayStudentReport();
    cout << "AUTHOR: MANN PATEL";
    return 0;
}
void displayHeader()
{
    cout << "****************************************" << endl;
    cout << "   STUDENT RECORD MANAGEMENT SYSTEM     " << endl;
    cout << "****************************************" << endl;
}
void acceptStudentDetails()
{
    cout << "ENTER STUDENT ENROLLMENT NUMBER:" << endl;
    cin >> enrollment_number;
    cout << "ENTER STUDENT NAME:" << endl;
    cin >> student_name;
    cout << "ENTER BRANCH:" << endl;
    cin >> branch;
    cout << "ENTER SEMESTER:" << endl;
    cin >> semester;

    cout << "ENTER M1:" << endl;
    cin >> m1;
    cout << "ENTER M2:" << endl;
    cin >> m2;
    cout << "ENTER M3:" << endl;
    cin >> m3;
    cout << "ENTER M4:" << endl;
    cin >> m4;
    cout << "ENTER M5:" << endl;
    cin >> m5;
}
void calculateAcademicResult()
{
    total_marks = m1 + m2 + m3 + m4 + m5;
    percentage = total_marks / 5.0;
}
void displayStudentReport()
{
    cout << "ENROLLEMENT NUMBER:" << enrollment_number << endl;
    cout << "STUDENT NAME:" << student_name << endl;
    cout << "BRANCH:" << branch << endl;
    cout << "SEMESTER:" << semester << endl;
    cout << "TOTAL MARKS:" << total_marks << endl;
    cout << "PERCENTAGE:" << percentage << endl;

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
}
