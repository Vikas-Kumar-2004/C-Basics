// Program to display the day of the week using switch statement

#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter day number (1–7)" << endl;
    cin >> x;

    switch (x)
    {
        // Break statement is important; otherwise, execution falls through
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "Invalid number";
    }
}
