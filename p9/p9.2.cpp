#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Student
{
    string enrollment;
    string name;
    string branch;
    int semester;
    float percentage;
    string grade;
};

string getGrade(float p)
{
    if (p >= 90)
        return "O";
    else if (p >= 85)
        return "A+";
    else if (p >= 80)
        return "A";
    else if (p >= 70)
        return "B+";
    else if (p >= 60)
        return "B";
    else
        return "C";
}

void display(Student *s, int n)
{
    cout << "\nStudent Records using Address-based Access\n";

    for (int i = 0; i < n; i++)
    {
        Student *p = s + i;

        cout << "\nAddress: " << p << endl;
        cout << "Enrollment Number: " << p->enrollment << endl;
        cout << "Student Name: " << p->name << endl;
        cout << "Branch: " << p->branch << endl;
        cout << "Semester: " << p->semester << endl;
        cout << "Percentage: " << p->percentage << endl;
        cout << "Grade: " << p->grade << endl;
    }
}

void average(Student *s, int n)
{
    float sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + (s + i)->percentage;
    }

    cout << "\nClass Average Percentage: "
         << sum / n << " %";
}

void highest(Student *s, int n)
{
    float high = s->percentage;

    for (int i = 1; i < n; i++)
    {
        if ((s + i)->percentage > high)
            high = (s + i)->percentage;
    }

    cout << "\nHighest Percentage: " << high << " %";
}

void lowest(Student *s, int n)
{
    float low = s->percentage;

    for (int i = 1; i < n; i++)
    {
        if ((s + i)->percentage < low)
            low = (s + i)->percentage;
    }

    cout << "\nLowest Percentage: " << low << " %";
}

int main()
{
    int n;

    cout << "STUDENT RECORD MANAGEMENT SYSTEM\n";

    cout << "\nEnter Number of Students: ";
    cin >> n;

    Student *s = new Student[n];

    cout << "\nDynamic Memory Allocated Successfully\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter Student " << i + 1 << " Details\n";

        cout << "Enrollment Number: ";
        cin >> s[i].enrollment;

        cout << "Student Name: ";
        cin.ignore();
        getline(cin, s[i].name);

        cout << "Branch: ";
        cin >> s[i].branch;

        cout << "Semester: ";
        cin >> s[i].semester;

        cout << "Percentage: ";
        cin >> s[i].percentage;

        s[i].grade = getGrade(s[i].percentage);
    }

    display(s, n);

    cout << "\n\nAcademic Summary";

    average(s, n);
    highest(s, n);
    lowest(s, n);

    cout << "\n\nSequential Access:";
    for (int i = 0; i < n; i++)
    {
        cout << "\n"
             << s[i].name;
    }

    delete[] s;
    s = nullptr;

    cout << "\n\nDynamic Memory Released Successfully";
    cout << "\nAddress Variable Reset Successfully";
    cout << "\n\nProgram Executed Successfully";
    cout << "AUTHOR: MANN PATEL";

    return 0;
}