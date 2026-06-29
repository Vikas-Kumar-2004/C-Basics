#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no of lines";
    cin>>n;
    //2n-1 numbers print karne ha
    for(int p=1;p<=2*n-1;p++)
    {
        cout<<char(p+64);
    }cout<<endl;
   
   int m=n-1;
   int nsp=1;
    for(int i=1;i<=m;i++)
    {
        // numbers
        int a=1;
        for(int j=1;j<=m+1-i;j++)
        {
            cout<<char(a+64);
            a++;
        }
        // spaces
        for(int k=1;k<=nsp;k++)
        {
            cout<<" ";
            a++;
        }
        nsp+=2;
        // numbers
        for(int j=1;j<=m+1-i;j++)
        {
            cout<<char(a+64);
            a++;
        }

        cout<<endl;
    }

}