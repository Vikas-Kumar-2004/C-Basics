// Program to print the first n odd numbers using a for loop

#include <iostream>
using namespace std;

int main()
{
    int a = 1, n;
    cout << "Enter a number" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << a << endl;
        a = a + 2;
    }
}
