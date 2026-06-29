#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter no of lines";
    cin >> n;
    // 2n-1 stars print
    for(int i=1;i<=2*n-1;i++){
        cout<<"*";
    }
    cout<<endl;
    int m;
    int nsp = 1;
    m = n - 1;
    for (int i = 1; i <= m; i++)
    {
        // star printing
        for (int j = 1; j <= m + 1 - i; j++)
        {
            cout << "*";
        }
        // space printing 
        for (int k = 1; k <= nsp; k++)
        {
            cout << " ";
        }
        nsp += 2;
        // star printing 
        for (int j = 1; j <= m + 1 - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}