// Program to check whether a number is composite or not

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin >> n;

    bool isComposite = false;

    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            isComposite = true;
            break;   // stop checking once a divisor is found
        }
    }

    if (isComposite)
    {
        cout << n << " is a composite number";
    }
    else
    {
        cout << n << " is not a composite number";
    }
}
