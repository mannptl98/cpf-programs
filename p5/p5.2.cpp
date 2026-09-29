#include <iostream>
using namespace std;
int main()
{
    string enrollment_number, student_name, branch, semester;
    long long mobile_number;
    char choice;
    int menu, total_marks, maths, cpf, physics;
    float average, percentage;
    do
    {
        cout << "**************************************" << endl;
        cout << "   STUDENT RECORD MANAGEMENT SYSTEM   " << endl;
        cout << "**************************************" << endl;

        cout << endl
             << "1. Register New Student";
        cout << endl
             << "2. Display Student Record";
        cout << endl
             << "3. Enter Student Marks";
        cout << endl
             << "4. Display Academic Result";
        cout << endl
             << "5. Exit" << endl;

        cout << "ENTER YOUR CHOICE:" << endl;
        cin >> menu;

        switch (menu)
        {
        case 1:
            choice = 'Y';
            while (choice == 'Y' || choice == 'y')
            {
                cout << "STUDENT REGISTERATION" << endl;

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

                cout << "STUDENT REGISTERED SUCCESSFULLY" << endl;

                cout << "DO YOU WANT TO REGISTER NEW STUDENT Y/N:" << endl;
                cin >> choice;
            }

        case 2:
            cout << "ENROLLMENT NUMBER:" << enrollment_number << endl;
            cout << "STUDENT NAME     :" << student_name << endl;
            cout << "BRANCH           :" << branch << endl;
            cout << "SEMESTER         :" << semester << endl;
            cout << "MOBILE NUMBER    :" << mobile_number << endl;

            break;

        case 3:

            cout << "ENTER MATHS MARKS:" << endl;
            cin >> maths;
            cout << "ENTER PHYSICS MARKS:" << endl;
            cin >> physics;
            cout << "ENTER CPF MARKS:" << endl;
            cin >> cpf;
            total_marks = maths + physics + cpf;
            average = total_marks / 3.00;
            percentage = total_marks / 3.00;

            cout << "MATHS:" << maths << endl;
            cout << "PHYSICS:" << physics << endl;
            cout << "CPF:" << cpf << endl;
            cout << "TOTAL MARKS:" << total_marks << endl;
            cout << "AVERAGE    :" << average << endl;
            cout << "PERCENTAGE :" << percentage << endl;
            break;

        case 4:
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
                cout << "RESULT=FAILED" << endl;
            }
            break;

        case 5:
            exit(0);

        default:
            cout << "invalid choice" << endl;
        }

    } while (choice != 5);
    cout << "AUTHOR: MANN PATEL";
    return 0;
}
