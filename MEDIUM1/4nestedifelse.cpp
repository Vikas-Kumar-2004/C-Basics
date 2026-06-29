// Program to check whether a number is divisible by 3 or 5 but not divisible by 15

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    if (n % 5 == 0 || n % 3 == 0)
    {
        if (n % 15 != 0)
        {
            cout << "The number is divisible by 3 or 5 but not by 15";
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
