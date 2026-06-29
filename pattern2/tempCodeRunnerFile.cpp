#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no of lines";
    cin>>n;
    int m;
    //2n-1 stars print karne ha
    for(int p=1;p<=2*n-1;p++)
    {
        cout<<"*";
    }cout<<endl;

    m=n-1;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=m+1-i;j++)
        {
            cout<<"*";
        }
        for(int k=1;k<=2*i-1;k++)
        {
            cout<<" ";
        }
        for(int l=1;l<=m+1-i;l++)
        {
            cout<<"*";
        }

        cout<<endl;
    }

}