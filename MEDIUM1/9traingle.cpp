// Program to check whether a triangle is valid using the triangle inequality theorem

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter the three sides of the triangle" << endl;
    cin >> a >> b >> c;

    if ((a + b > c) && (b + c > a) && (c + a > b))
    {
        cout << "Valid triangle";
    }
    else
    {
        cout << "Invalid triangle";
    }
}
