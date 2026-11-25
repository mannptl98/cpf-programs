#include <iostream>
#include <string>
using namespace std;
struct Student
{
    string enrollment_number, student_name;
    int marks;
    float percentage;
    char grade;
};
struct Student1
{
    int marks1;
    char grade1;
    float percentage1;
    string enrollment_number1, student_name1;
};
int main()
{
    Student s;
    Student1 s1;
    cout << "Total size of Structure:" << sizeof(s) << endl;
    cout << "Total size of Structure:" << sizeof(s1) << endl;
    cout << "AUTHOR: MANN PATEL";

    return 0;
}