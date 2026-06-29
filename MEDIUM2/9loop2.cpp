// Program to find the alternating sum of numbers: +1 -2 +3 -4 +5 ... up to n

#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (i % 2 != 0)
            sum = sum + i;   // add odd numbers
        else
            sum = sum - i;   // subtract even numbers
    }

    cout << "Sum is " << sum;
}
