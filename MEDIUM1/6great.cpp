// Program to find the greatest number among three numbers using nested if-else

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter three numbers" << endl;
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << a << " is greatest";
        }
        else   // c > a
        {
            cout << c << " is greatest";
        }
    }
    else   // b >= a
    {
        if (b > c)
        {
            cout << b << " is greatest";
        }
        else   // c >= b
        {
            cout << c << " is greatest";
        }
    }
}
