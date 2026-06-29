// Program to find the sum of first n natural numbers using a for loop

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter the number of terms: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    cout << "Sum is: " << sum;
}
