// Program to print a geometric progression starting from 1 with common ratio 2

#include <iostream>
using namespace std;

int main()
{
    int a = 1, n;
    cout << "Enter the number of terms" << endl;
    cin >> n;

    // Printing GP: 1, 2, 4, 8, 16, ...
    for (int i = 1; i <= n; i++)
    {
        cout << a << endl;
        a = a * 2;
    }
}
