// Program to print a hollow number pyramid pattern

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of lines: ";
    cin >> n;

    // First row: print numbers from 1 to 2*n-1
    for (int p = 1; p <= 2 * n - 1; p++)
    {
        cout << p;
    }
    cout << endl;

    int m = n - 1;
    int nsp = 1; // number of spaces in the middle

    // Hollow pyramid
    for (int i = 1; i <= m; i++)
    {
        // Left numbers
        int a = 1;
        for (int j = 1; j <= m + 1 - i; j++)
        {
            cout << a;
            a++;
        }

        // Middle spaces
        for (int k = 1; k <= nsp; k++)
        {
            cout << " ";
            a++;
        }
        nsp += 2;

        // Right numbers
        for (int j = 1; j <= m + 1 - i; j++)
        {
            cout << a;
            a++;
        }

        cout << endl;
    }
}
