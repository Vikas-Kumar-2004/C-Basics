// Program to print an arithmetic progression starting from 4 with a common difference of 3

#include <iostream>
using namespace std;

int main()
{
    int a = 4, n;
    cout << "Enter the number of terms" << endl;
    cin >> n;

    // Printing n terms of the AP: 4, 7, 10, 13, ...
    for (int i = 1; i <= n; i++)
    {
        cout << a << endl;
        a = a + 3;
    }
}
