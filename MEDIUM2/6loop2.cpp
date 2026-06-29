// Program to reverse a given number entered by the user

#include <iostream>
using namespace std;

int main()
{
    int num, rev = 0, lastdigit = 0;
    cout << "Enter a number: ";
    cin >> num;

    while (num > 0)
    {
        rev = rev * 10;
        lastdigit = num % 10;
        rev = rev + lastdigit;
        num = num / 10;
    }

    cout << "Reversed number is: " << rev;
}
