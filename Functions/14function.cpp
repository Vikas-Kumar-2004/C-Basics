#include <iostream>
using namespace std;

int main()
{
    int a, b;

    // Input two numbers
    cout << "Enter a = ";
    cin >> a;
    cout << "Enter b = ";
    cin >> b;

    // Swapping without a temporary variable
    a = a + b; // Step 1: a becomes sum of a and b
    b = a - b; // Step 2: b becomes original a
    a = a - b; // Step 3: a becomes original b

    // Output swapped values
    cout << "After swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
