// Program to check whether a number is divisible by both 5 and 3

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    if (n % 5 == 0)
    {
        if (n % 3 == 0)
        {
            cout << "The number is divisible by both 5 and 3";
        }
        else
        {
            cout << "Condition not matched";
        }
    }
    else
    {
        cout << "Condition not matched";
    }
}
