// Program to calculate nCr (combination) and nPr (permutation) using factorials

#include <iostream>
using namespace std;

int main()
{
    int n, r;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;

    // Step 1: Calculate n! 
    int nfact = 1;
    for (int i = 1; i <= n; i++)
    {
        nfact = nfact * i;
    }

    // Step 2: Calculate r!
    int rfact = 1;
    for (int i = 1; i <= r; i++)
    {
        rfact = rfact * i;
    }

    // Step 3: Calculate (n-r)!
    int nrfact = 1;
    for (int i = 1; i <= n - r; i++)
    {
        nrfact = nrfact * i;
    }

    // Step 4: Calculate nCr = n! / (r! * (n-r)!)
    int ncr = nfact / (rfact * nrfact);
    cout << "Combination (nCr) is: " << ncr << endl;

    // Step 5: Calculate nPr = n! / (n-r)!
    int npr = nfact / nrfact;
    cout << "Permutation (nPr) is: " << npr << endl;

    return 0;
}
