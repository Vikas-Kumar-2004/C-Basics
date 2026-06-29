#include <iostream>
using namespace std;

// Function to find the maximum of three numbers
int maxthree(int a, int b, int c)
{
    if (a > b && a > c)
        return a;
    else if (b > a && b > c)
        return b;
    else
        return c;
}

int main()
{
    int a, b, c;
    cout << "Enter a = ";
    cin >> a;
    cout << "Enter b = ";
    cin >> b;
    cout << "Enter c = ";
    cin >> c;

    cout << "Greatest is: " << maxthree(a, b, c) << endl;

    return 0;
}
