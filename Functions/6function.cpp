// Program to calculate combination (nCr) using a factorial function

#include <iostream>
using namespace std;

// Function to calculate factorial of a number
int fact(int x)
{
    int f = 1;
    for (int i = 1; i <= x; i++)
    {
        f = f * i;
    }
    return f;
}

int main()
{
    int n, r;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;

    // Calculate factorials
    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n - r);

    // Calculate combination
    int ncr = nfact / (rfact * nrfact);

    cout << "Combination (nCr) is: " << ncr << endl;

    return 0;
}
