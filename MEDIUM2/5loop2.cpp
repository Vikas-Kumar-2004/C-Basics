// Program to find the sum of digits of a given number

#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0, lastdigit = 0;
    cout << "Enter a number: ";
    cin >> num;

    while (num > 0)
    {
        lastdigit = num % 10;
        sum = sum + lastdigit;
        num = num / 10;
    }

    cout << "Sum of digits is " << sum;
}
