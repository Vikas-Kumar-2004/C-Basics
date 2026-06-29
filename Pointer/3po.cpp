#include<iostream>
using namespace std;
int main()
{
    int x,y;
    int *p=&x;
    int *q=&y;
    cout<<"enter first number:";
    cin>>*p;
    cout<<"enter second number:";
    cin>>*q;
    cout<<"sum is"<<*p+*q<<endl;
    cout<<p;
}