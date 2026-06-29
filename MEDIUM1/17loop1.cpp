// Program to print odd numbers (1, 3, 5, ...) up to a given limit using a for loop

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    // Prints first n odd numbers
    for (int i = 1; i <= 2 * n - 1; i = i + 2)
    {
        cout << i << " ";
    }
    cout<<endl;
    // 2nd method
    int a = 1;

    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";
        a+=2;
    }
}
