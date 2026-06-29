// Program to find the nth term of the Fibonacci series using a for loop

#include <iostream>
using namespace std;

int main()
{
    int num, a = 1, b = 1, sum = 0;
    cout << "Enter a number" << endl;
    cin >> num;

    // Fibonacci series: 1 1 2 3 5 8 ...
    for (int i = 1; i <= num - 2; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }

    // Printing b because for n = 1 or 2, sum remains 0
    cout << "Term is: " << b;
}
