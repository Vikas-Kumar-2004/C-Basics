// Program to check whether a student has passed or failed using the ternary operator

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the marks" << endl;
    cin >> a;

    cout << "The result of the student is" << endl;

    // condition ? true : false
    (a > 33) ? cout << "Pass" : cout << "Fail";

    return 0;
}
