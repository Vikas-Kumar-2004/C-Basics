#include <iostream>
using namespace std;

// Function to calculate factorial of a number
int fact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}

int main()
{
    int num;
    cout << "Enter the number up to which factorial is to be found: ";
    cin >> num;

    // Print factorials from 1 to num
    for (int i = 1; i <= num; i++)
    {
        cout << "Factorial of " << i << " = " << fact(i) << endl;
    }

    return 0;
}
