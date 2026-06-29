// Program to find the greatest number among three numbers entered by the user

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the three numbers" << endl;
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << a << " is greatest";
    }
    else if (b > a && b > c)
    {
        cout << b << " is greatest";
    }
    else
    {
        cout << c << " is greatest";
    }
}
