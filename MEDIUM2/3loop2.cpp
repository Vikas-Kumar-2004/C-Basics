// Program to count the number of digits in a given number

#include <iostream>
using namespace std;

int main()
{
    int num, count = 0;
    cout << "Enter a number: ";
    cin >> num;

    // Special case when number is 0
    if (num == 0)
    {
        count = 1;
    }
    else
    {
        while (num > 0)
        {
            num = num / 10;
            count++;
        }
    }

    cout << "Digits are " << count;
}
