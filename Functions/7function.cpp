// Program to print Pascal's Triangle using combination formula

#include <iostream>
using namespace std;

// Function to calculate factorial
int fact(int x)
{
    int f = 1;
    for (int i = 1; i <= x; i++)
    {
        f = f * i;
    }
    return f;
}

// Function to calculate combination nCr
int combination(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    // Print Pascal's Triangle
    for (int i = 0; i < n; i++)
    {
        // Print leading spaces for alignment
        for (int s = 0; s < n - i - 1; s++)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << combination(i, j) << " ";
        }
        cout << endl;
    }
}
