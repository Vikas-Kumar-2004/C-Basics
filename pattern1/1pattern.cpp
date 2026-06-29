// Program to print a rectangle star pattern (3 rows and 5 columns)

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
