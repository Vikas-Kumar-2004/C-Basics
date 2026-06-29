// Program to check whether a number is even or odd using the ternary operator

#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter the number" << endl;
    cin >> x;

    // Using ternary operator
    // condition ? true : false
    x % 2 == 0 ? cout << "Even" : cout << "Odd";
}
