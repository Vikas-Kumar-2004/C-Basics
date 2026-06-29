// Program to print Fibonacci series up to n terms

#include <iostream>
using namespace std;

int main()
{
    int f = 0, s = 1, sum = 0, num;
    cout << "Enter number of elements: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        cout << f << " ";
        sum = f + s;
        f = s;
        s = sum;
    }
}
