
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    int i = 0, space = 0, alpha = 0, digit = 0, special_character = 0, j = 0;
    int words = 0;
    bool in_word = false;
    char line[100];
    string fn = "", ln = "", fl = "";
    cout << "********************************************" << endl;
    cout << "          DOCUMENT TEXT ANALYZER            " << endl;
    cout << "********************************************" << endl;

    cout << "ENTER PARAGRAPH:" << endl;
    cin.getline(line, 100);

    while (line[i] != '\0')
    {
        if (line[i] == ' ')
        {
            space++;
            in_word = false;
        }
        else if ((line[i] >= 65 && line[i] <= 90) || (line[i] >= 97 && line[i] <= 122))
        {
            alpha++;
            if (!in_word)
            {
                words++;
                in_word = true;
            }
        }
        else if (line[i] >= 48 && line[i] <= 57)
        {
            digit++;
            if (!in_word)
            {
                words++;
                in_word = true;
            }
        }
        else
        {
            if (!in_word)
            {
                words++;
                in_word = true;
            }
        }
        i++;
    }

    cout << "WORD=" << words << endl;
    cout << "ALPHABET=" << alpha << endl;
    cout << "DIGIT=" << digit << endl;
    cout << "CHARACTER=" << i << endl;

    special_character = i - (space + alpha + digit);
    cout << "SPECIAL CHARACTER=" << special_character << endl;

    i = 0;

    while (line[i] == ' ')
        i++;

    while (line[i] != '\0' && line[i] != ' ')
    {
        fn = fn + line[i];
        i++;
    }

    cout << "First word:" << fn << endl;

    if (line[0] != '\0')
    {
        fl = line[0];
        cout << "First letter:" << fl << endl;
    }

    string paragraph = line;
    string last_word = "";
    string additional_sentence, keyword, upper, lower, rev, word;
    string copied, str1, str2;
    bool found = false;
    int position = -1;

    i = paragraph.length() - 1;

    while (i >= 0 && paragraph[i] == ' ')
        i--;

    while (i >= 0 && paragraph[i] != ' ')
    {
        last_word = paragraph[i] + last_word;
        i--;
    }

    cout << "Last word:" << last_word << endl;

    if (paragraph.length() > 0)
        cout << "Last character:" << paragraph[paragraph.length() - 1] << endl;

    cout << "\nEnter Additional Sentence:" << endl;
    getline(cin, additional_sentence);

    paragraph = paragraph + "\n" + additional_sentence;

    cout << "Updated Paragraph:" << endl;
    cout << paragraph << endl;

    cout << "\nEnter Search Word:";
    getline(cin, keyword);

    if (keyword.length() > 0)
    {
        for (i = 0; i + keyword.length() <= paragraph.length(); i++)
        {
            for (j = 0; j < keyword.length(); j++)
            {
                if (paragraph[i + j] != keyword[j])
                    break;
            }

            if (j == keyword.length())
            {
                found = true;
                position = i;
                break;
            }
        }
    }

    if (found)
    {
        cout << "Keyword Found" << endl;
        cout << "First Occurrence Position:" << position << endl;
    }
    else
        cout << "Keyword Not Found" << endl;

    upper = paragraph;
    lower = paragraph;

    for (i = 0; i < paragraph.length(); i++)
    {
        if (upper[i] >= 'a' && upper[i] <= 'z')
            upper[i] = upper[i] - 32;

        if (lower[i] >= 'A' && lower[i] <= 'Z')
            lower[i] = lower[i] + 32;
    }

    cout << "\nUppercase" << endl;
    cout << upper << endl;

    cout << "\nLowercase" << endl;
    cout << lower << endl;

    rev = paragraph;

    for (i = 0, j = rev.length() - 1; i < j; i++, j--)
    {
        char temp = rev[i];
        rev[i] = rev[j];
        rev[j] = temp;
    }

    cout << "\nReverse" << endl;
    cout << rev << endl;

    cout << "\nEnter Word for Palindrome Check:";
    getline(cin, word);

    rev = word;

    for (i = 0, j = rev.length() - 1; i < j; i++, j--)
    {
        char temp = rev[i];
        rev[i] = rev[j];
        rev[j] = temp;
    }

    if (word == rev)
        cout << "Result: Palindrome" << endl;
    else
        cout << "Result: Not Palindrome" << endl;

    cout << "\nStandard String Functions" << endl;

    cout << "Length: " << paragraph.length() << endl;

    copied = paragraph;
    cout << "String Copied Successfully" << endl;

    str1 = paragraph;
    str2 = copied;

    if (str1.compare(str2) == 0)
        cout << "Comparison Result: Equal" << endl;
    else
        cout << "Comparison Result: Not Equal" << endl;

    str1.append(additional_sentence);
    cout << "Concatenation: Successful" << endl;

    if (paragraph.find(keyword) != string::npos)
        cout << "Substring Search: Found" << endl;
    else
        cout << "Substring Search: Not Found" << endl;

    for (i = 0; i < copied.length(); i++)
        copied[i] = toupper(copied[i]);

    cout << "toupper(): Successful" << endl;

    for (i = 0; i < copied.length(); i++)
        copied[i] = tolower(copied[i]);

    cout << "tolower(): Successful" << endl;
    cout << "AUTHOR: MANN PATEL";

    return 0;
}
