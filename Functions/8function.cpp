#include <iostream>
using namespace std;

// Function demonstrating pass-by-value
void fun(int x, int y)
{
    cout << "Address of fun's x: " << &x << endl;
    cout << "Address of fun's y: " << &y << endl;
}

int main()
{
    int x, y;

    cout << "Address of main's x: " << &x << endl;
    cout << "Address of main's y: " << &y << endl;

    // Pass x and y to the function (by value)
    fun(x, y);

    return 0;
}
