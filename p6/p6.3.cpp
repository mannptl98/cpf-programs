#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

int main()
{
    int n;
    string EnrollmentNo[100];
    string StudentName[100];
    float Percentage[100];
    string Grade[100];
    int position;
    int tempPer;
    string tempNo;
    string tempName;

    cout << endl
         << "***********************************************************************";
    cout << endl
         << "*                 STUDENT RECORD MANAGEMENT SYSTEM                    *";
    cout << endl
         << "***********************************************************************";

    cout << endl
         << endl
         << "Enter The Number Of Students : ";
    cin >> n;

    cout << endl
         << "Enter Students Details : ";

    for (int i = 0; i < n; i++)
    {
        cout << endl
             << "Student " << i + 1 << " - ";

        cout << "Enter Enrollment Number : ";
        cin >> EnrollmentNo[i];

        cin.ignore();

        cout << "Enter Student Name : ";
        getline(cin, StudentName[i]);
        cout << "Enter The Percentage : ";
        cin >> Percentage[i];
        cout << "Enter The Grade : ";
        cin >> Grade[i];
    }

    cout << endl
         << "**************************************************************************";
    cout << endl
         << "*                       Current Student Record                           *";
    cout << endl
         << "**************************************************************************";
    cout << endl
         << endl
         << "--------------------------------------------------------------------------";

    for (int i = 0; i < n; i++)
    {
        cout << endl
             << "Enrollment Number            : " << EnrollmentNo[i];
        cout << endl
             << "Student Name                 : " << StudentName[i];
        cout << endl
             << "Percentage                   : " << Percentage[i];
        cout << endl
             << "Grade                        : " << Grade[i];
    }

    cout << endl
         << "--------------------------------------------------------------------------";

    cout << endl
         << "Insert New Position";
    cout << endl
         << "Enter Position : ";
    cin >> position;

    if (position >= 1 && position <= n + 1)
    {
        for (int i = n; i >= position; i--)
        {
            EnrollmentNo[i] = EnrollmentNo[i - 1];
            StudentName[i] = StudentName[i - 1];
            Percentage[i] = Percentage[i - 1];
            Grade[i] = Grade[i - 1];
        }

        cout << endl
             << "Enter New Enrollment Number : ";
        cin >> EnrollmentNo[position - 1];

        cin.ignore();

        cout << "Enter New Student Name : ";
        getline(cin, StudentName[position - 1]);
        cout << "Enter New Percentage : ";
        cin >> Percentage[position - 1];
        cout << "Enter New Grade : ";
        cin >> Grade[position - 1];

        n++;

        cout << endl
             << "Record Inserted Successfully..!!";

        cout << endl
             << "--------------------------------------------------------------------------";
        cout << endl
             << endl
             << "**************************************************************************";
        cout << endl
             << "*                       Updated Student Record                           *";
        cout << endl
             << "**************************************************************************";
        cout << endl
             << endl
             << "--------------------------------------------------------------------------";

        for (int i = 0; i < n; i++)
        {
            cout << endl
                 << "Enrollment Number            : " << EnrollmentNo[i];
            cout << endl
                 << "Student Name                 : " << StudentName[i];
            cout << endl
                 << "Percentage                   : " << Percentage[i];
            cout << endl
                 << "Grade                        : " << Grade[i];
        }

        cout << endl
             << "--------------------------------------------------------------------------";
    }
    else
    {
        cout << endl
             << "Invalid Position !!";
    }

    string searchEnrollment;
    bool found = false;

    cout << endl
         << "Updated Student Record";
    cout << endl
         << "Enter Enrollment Number : ";
    cin >> searchEnrollment;

    for (int i = 0; i < n; i++)
    {
        if (EnrollmentNo[i] == searchEnrollment)
        {
            cout << endl
                 << "Enter New Percentage : ";
            cin >> Percentage[i];

            cout << "Enter New Grade : ";
            cin >> Grade[i];

            found = true;

            cout << endl
                 << "Record Updated Successfully..!!";
            break;
        }
    }

    if (!found)
    {
        cout << endl
             << "Student Record Not Found..!!";
    }

    cout << endl
         << endl
         << "-----------------------------------------------------";
    cout << endl
         << "-              Delete Student Record                -";
    cout << endl
         << "-----------------------------------------------------";

    cout << endl
         << "Enter Position : ";
    cin >> position;

    if (position >= 1 && position <= n)
    {
        for (int i = position - 1; i < n - 1; i++)
        {
            EnrollmentNo[i] = EnrollmentNo[i + 1];
            StudentName[i] = StudentName[i + 1];
            Percentage[i] = Percentage[i + 1];
            Grade[i] = Grade[i + 1];
        }
        n--;

        cout << endl
             << "Record Deleted Successfully..!!";
    }
    else
    {
        cout << endl
             << "Invalid Position..!!";
    }

    cout << endl
         << endl
         << "**************************************************************************";
    cout << endl
         << "*                        Final Student Record                            *";
    cout << endl
         << "**************************************************************************";
    cout << endl
         << endl
         << "--------------------------------------------------------------------------";

    for (int i = 0; i < n; i++)
    {
        cout << endl
             << "Enrollment Number            : " << EnrollmentNo[i];
        cout << endl
             << "Student Name                 : " << StudentName[i];
        cout << endl
             << "Percentage                   : " << Percentage[i];
        cout << endl
             << "Grade                        : " << Grade[i];
    }

    cout << endl
         << "--------------------------------------------------------------------------";

    cout << "AUTHOR: MANN PATEL";
    return 0;
}
