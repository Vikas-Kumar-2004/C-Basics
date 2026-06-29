// Program to print a binary number triangle pattern

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows of the triangle: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int a;
        if (i % 2 == 0)
            a = 0;   // even row starts with 0
        else
            a = 1;   // odd row starts with 1

        for (int j = 1; j <= i; j++)
        {
            cout << a << " ";
        }
        cout << endl;
    }
}
