
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i, j;
    string enrollment_number, student_name, branch, s_n, text = "computer", pattern = "put";
    string fn = " ", ln = " ";
    cout << "***************************************" << endl;
    cout << "   STUDENT RECORD MANAGEMENT SYSTEM    " << endl;
    cout << "***************************************" << endl;

    cout << "ENTER STUDENT ENROLLMENT NUMBER:" << endl;
    getline(cin, enrollment_number);
    cout << "ENTER STUDENT NAME:" << endl;
    getline(cin, student_name);
    cout << "ENTER BRANCH:" << endl;
    getline(cin, branch);
    s_n = student_name + "-" + enrollment_number;
    cout << s_n << endl;

    fn = "";
    ln = "";

    for (i = 0; i < student_name.length(); i++)
    {
        if (student_name[i] == ' ')
        {
            break;
        }
        else
        {
            fn = fn + student_name[i];
        }
    }

    for (j = i + 1; j < student_name.length(); j++)
    {
        ln = ln + student_name[j];
    }

    cout << "first name:" << fn << endl;
    cout << "last name:" << ln << endl;

    i = 0;
    j = 0;

    while (i <= text.length() - pattern.length())
    {
        j = 0;
        while (j < pattern.length() && text[i + j] == pattern[j])
        {
            j++;
        }

        if (j == pattern.length())
            break;

        i++;
    }

    if (j == pattern.length())
        cout << "Pattern Found." << endl;
    else
        cout << "Pattern Not Found." << endl;

    cout << "\nEnter Keyword: ";
    string keyword;
    getline(cin, keyword);

    bool found = false;

    for (i = 0; i + keyword.length() <= student_name.length(); i++)
    {
        for (j = 0; j < keyword.length(); j++)
        {
            if (student_name[i + j] != keyword[j])
                break;
        }

        if (j == keyword.length())
        {
            found = true;
            break;
        }
    }

    if (found)
        cout << "Keyword Found." << endl;
    else
        cout << "Keyword Not Found." << endl;

    cout << "\nUsing Standard String Functions" << endl;

    cout << "Student Reference: "
         << student_name + "-" + enrollment_number << endl;

    cout << "First Name: "
         << student_name.substr(0, student_name.find(' ')) << endl;

    cout << "Last Name: "
         << student_name.substr(student_name.find(' ') + 1) << endl;

    if (student_name.find(keyword) != string::npos)
        cout << "Keyword Found." << endl;
    else
        cout << "Keyword Not Found." << endl;

    cout << "\nStudent Report" << endl;
    cout << "Enrollment Number: " << enrollment_number << endl;
    cout << "Student Name: " << student_name << endl;
    cout << "Branch: " << branch << endl;
    cout << "AUTHOR: MANN PATEL";
    return 0;
}
