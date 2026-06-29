#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
    int temp;
    temp=*y;//derefernce operator
    *y=*x;
    *x=temp;
    return;
}
int main()
{
    int a,b;
    cout<<"enter a=";
    cin>>a;
    cout<<"enter b=";
    cin>>b;
    swap(&a,&b);
    cout<<"after swapping"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b;
}