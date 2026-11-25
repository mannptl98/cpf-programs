#include <iostream>
#include <string>
using namespace std;
struct Student
{
    string enrollment_number, student_name, branch, grade, gmail;
    int semester;
    float percentage;
    double mobile_number;
};
int main()
{
    int n, i;
    cout << "ENTER NUMBER OF STUDENTS:" << endl;
    cin >> n;
    Student s[n];
    for (i = 0; i < n; i++)
    {
        cout << "ENTER ENROLLMENT NUMBER OF STUDENT:" << endl;
        cin >> s[i].enrollment_number;
        cout << "ENTER STUDENT NAME:" << endl;
        cin >> s[i].student_name;
        cout << "ENTER BRANCH:" << endl;
        cin >> s[i].branch;
        cout << "ENTER EMAIL ADDRESS:" << endl;
        cin >> s[i].gmail;
        cout << "ENTER MOBILE NUMBER:" << endl;
        cin >> s[i].mobile_number;
        cout << "ENTER SEMESTER:" << endl;
        cin >> s[i].semester;
        cout << "ENTER PERCENTAGE:" << endl;
        cin >> s[i].percentage;
        cout << "ENTER GRADE:" << endl;
        cin >> s[i].grade;
    }
    for (i = 0; i < n; i++)
    {
        cout << "ENROLLMENT NUMBER:" << s[i].enrollment_number << endl;
        cout << "STUDENT NAME:" << s[i].student_name << endl;
        cout << "BRANCH:" << s[i].branch << endl;
        cout << "EMAIL ADDRESS:" << s[i].gmail << endl;
        cout << "MOBILE NUMBER:" << s[i].mobile_number << endl;
        cout << "SEMESTER:" << s[i].semester << endl;
        cout << "PERCENTAGE:" << s[i].percentage << endl;
        cout << "GRADE:" << s[i].grade << endl;
    }
    cout << "AUTHOR: MANN PATEL";
    return 0;
}