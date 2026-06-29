// Program to print uppercase alphabets along with their ASCII values

#include <iostream>
using namespace std;

int main()
{
    // ASCII values of uppercase letters A–Z range from 65 to 90
    for (int i = 65; i <= 90; i++)
    {
        // Type casting integer ASCII value to character
        cout << (char)i << " = " << i << endl;
    }
}
