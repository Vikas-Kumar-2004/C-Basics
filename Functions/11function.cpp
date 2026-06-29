#include <iostream>
using namespace std;

// Function to calculate GCD of two numbers
int gcd(int a, int b)
{
    int hcf = 1; 
 
    for (int i = 1; i <= min(a, b); i++)
    {
        // Check if i divides both numbers
        if (a % i == 0 && b % i == 0)
        {
            hcf = i; // Update HCF
        }
    }
    return hcf;
}

int main()
{
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    cout << "GCD is: " << gcd(a, b) << endl;

    return 0;
}
