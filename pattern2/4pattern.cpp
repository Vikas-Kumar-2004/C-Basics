// Program to print the upper half of a hollow diamond star pattern

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of lines: ";
    cin >> n;

    int m = n - 1;

    // Top full line of stars (width = 2*n - 1)
    for (int p = 1; p <= 2 * n - 1; p++)
    {
        cout << "*";
    }
    cout << endl;

    // Hollow upper pyramid
    for (int i = 1; i <= m; i++)
    {
        // Left stars
        for (int j = 1; j <= m + 1 - i; j++)
        {
            cout << "*";
        }

        // Spaces in the middle
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << " ";
        }

        // Right stars
        for (int l = 1; l <= m + 1 - i; l++)
        {
            cout << "*";
        }

        cout << endl;
    }
}
