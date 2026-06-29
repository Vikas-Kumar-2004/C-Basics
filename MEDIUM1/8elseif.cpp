// Program to check whether a character is a vowel, consonant, or not an alphabet

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter the character" << endl;
    cin >> ch;

    // a to z → ASCII values 97 to 122
    // A to Z → ASCII values 65 to 90

    int ascii = (int)ch;

    if ((ascii >= 97 && ascii <= 122) || (ascii >= 65 && ascii <= 90))
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            cout << "Vowel";
        }
        else
        {
            cout << "Consonant";
        }
    }
    else
    {
        cout << "Character is not an alphabet";
    }
}
