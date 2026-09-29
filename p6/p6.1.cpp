#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    int n, participate_score[100], total_score = 0, highest_score = 0, lowest_score = 0, i;
    string participate_id[100], participate_name[100];
    float average_score = 0;

    cout << "---------------------------------------------" << endl;
    cout << "         PARTICIPATE PERFORMANCE             " << endl;
    cout << "---------------------------------------------" << endl;

    cout << "ENTER NUMBER OF PARTICIPANTS:" << endl;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "ENTER PARTICIPANT ID:" << endl;
        cin >> participate_id[i];
        cout << "ENTER PARTICIPANT NAME:" << endl;
        cin >> participate_name[i];
        cout << "ENTER PARTICIPANT SCORE:" << endl;
        cin >> participate_score[i];
    }

    cout << endl
         << left << setw(12) << "ID"
         << setw(20) << "NAME"
         << setw(10) << "SCORE" << endl;

    for (i = 0; i < n; i++)
    {
        cout << endl
             << left << setw(12) << participate_id[i]
             << setw(20) << participate_name[i]
             << setw(10) << participate_score[i];
    }

    highest_score = participate_score[0];
    lowest_score = participate_score[0];
    for (i = 0; i < n; i++)
    {
        total_score = total_score + participate_score[i];
        if (participate_score[i] > highest_score)
        {
            highest_score = participate_score[i];
        }
        if (participate_score[i] < lowest_score)
        {
            lowest_score = participate_score[i];
        }
    }
    average_score = total_score / n;

    cout << "TOTAL SCORE=" << total_score << endl;
    cout << "AVERAGE SCORE=" << average_score << endl;
    cout << "HIGHEST SCORE=" << highest_score << endl;
    cout << "LOWEST SCORE=" << lowest_score << endl;
    cout << "AUTHOR: MANN PATEL";
    return 0;
}