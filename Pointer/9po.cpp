#include<iostream>
using namespace std;
void find(int n,int *x,int *y)
{ 
    *y=n%10; //last digit
    while(n>9)
    {
        n=n/10;
    }
    *x=n;
    return;

}
int main()
{
    int num;
    cout<<"enter a number:";
    cin>>num;
    int firstDigit,lastDigit;
    int*p=&firstDigit;
    int *q=&lastDigit;
    find(num,p,q);
    cout<<"firstDigit "<<firstDigit<<endl;
    cout<<"lastDigit "<<lastDigit<<endl;

}