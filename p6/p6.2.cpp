#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    int n, participate_score[100], total_score = 0, highest_score = 0, lowest_score = 0, i, j, temp_score;
    string participate_id[100], participate_name[100], search_id, temp_id, temp_name;
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

    cout << "ENTER SEARCH ID:" << endl;
    cin >> search_id;

    cout << endl
         << left << setw(12) << "ID"
         << setw(20) << "NAME"
         << setw(10) << "SCORE" << endl;

    for (i = 0; i < n; i++)
    {
        if (search_id == participate_id[i])
        {
            cout << endl
                 << left << setw(12) << participate_id[i]
                 << setw(20) << participate_name[i]
                 << setw(10) << participate_score[i];
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (participate_score[j] < participate_score[j + 1])
            {
                temp_id = participate_id[j];
                participate_id[j] = participate_id[j + 1];
                participate_id[j + 1] = temp_id;

                temp_name = participate_name[j];
                participate_name[j] = participate_name[j + 1];
                participate_name[j + 1] = temp_name;

                temp_score = participate_score[j];
                participate_score[j] = participate_score[j + 1];
                participate_score[j + 1] = temp_score;
            }
        }
    }
    cout << "ALL PERFORMERS" << endl;

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

    cout << "TOP THREE PERFORMER" << endl;
    cout << endl
         << left << setw(12) << "ID"
         << setw(20) << "NAME"
         << setw(10) << "SCORE" << endl;

    for (i = 0; i < 3; i++)
    {
        cout << endl
             << left << setw(12) << participate_id[i]
             << setw(20) << participate_name[i]
             << setw(10) << participate_score[i];
    }
    cout << "AUTHOR: MANN PATEL";
    return 0;
}