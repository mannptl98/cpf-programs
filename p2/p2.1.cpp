#include <iostream>
using namespace std;
int main()
{
    string enrollment_number, student_name, branch;
    int semester;
    long long mobile_number;

    cout << "******************************************" << endl;
    cout << "     STUDENT RECORD MANAGEMENT SYSTEM     " << endl;
    cout << "******************************************" << endl;

    cout << "ENTER ENROLLMENT NUMBER:" << endl;
    cin >> enrollment_number;
    cout << "ENTER STUDENT NAME:" << endl;
    cin >> student_name;
    cout << "ENTER BRANCH:" << endl;
    cin >> branch;
    cout << "ENTER SEMESTER:" << endl;
    cin >> semester;
    cout << "ENTER MOBILE NUMBER:" << endl;
    cin >> mobile_number;

    cout << "-------------------------------------------" << endl;
    cout << "            STUDENT INFORMATION            " << endl;
    cout << "-------------------------------------------" << endl;

    cout << "ENROLLMENT NUMBER:" << enrollment_number << endl;
    cout << "STUDENT NAME:" << student_name << endl;
    cout << "BRANCH:" << branch << endl;
    cout << "SEMESTER:" << semester << endl;
    cout << "MOBILE NUMBER:" << mobile_number << endl;

    return 0;
}