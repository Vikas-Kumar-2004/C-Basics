// Program to make a simple calculator using switch statement

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char ch;   // ch can be +, -, *, /

    cout << "Enter the expression (e.g., 5+3): ";
    cin >> a >> ch >> b;

    // Calculator using switch statement
    switch (ch)
    {
        case '+':
            cout << a + b;
            break;

        case '-':
            cout << a - b;
            break;

        case '*':
            cout << a * b;
            break;

        case '/':
            cout << a / b;
            break;

        default:
            cout << "Invalid operator";
    }
}
