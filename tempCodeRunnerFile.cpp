#include<iostream>
using namespace std;
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    return;
}
int main()
{
    int a,b;
    cout<<"enter a=";
    cin>>a;
    cout<<"enter b=";
    cin>>b;
    swap(a,b);
    cout<<"after swapping";
    cout<<"a="<<a<<endl;
    cout<<"b="<<b;
}