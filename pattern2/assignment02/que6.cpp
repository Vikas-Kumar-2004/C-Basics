#include<iostream>
using namespace std;

 main()
{
    int n;
    cout << "Enter number of lines: ";
    cin >> n;

    // First line: Palindromic number pattern
    for(int i = 1; i <= n; i++)
    {
        cout << i;
    }
    for(int i = n - 1; i >= 1; i--)
    {
        cout << i;
    }
    cout << endl; // Add newline after the first line

    int m = n - 1;
    int nsp = 1;
    for(int i = 1; i <= m; i++)
    {
        int a = 1;

        // Left side numbers
        for(int j = 1; j <= m + 1 - i; j++)
        {
            cout << a;
            a++;
        }

        // Spaces
        for(int k = 1; k <= nsp; k++)
        {
            cout << " ";
        }
        nsp += 2;

        // Right side numbers (descending)
        a--;
        for(int j = 1; j <= m + 1 - i; j++)
        {
            cout << a;
            a--;
        }

        cout << endl;
    }

    return 0;
}
