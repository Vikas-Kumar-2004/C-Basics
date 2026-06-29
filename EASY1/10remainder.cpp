#include<iostream>
using namespace std;
int main()
{
    int a=16,b=3,q,r;
    q=a/b;
    //dividend=divisor*quotient+remainder;
    //a=b*q+r;
    r=a-(b*q);
    cout<<r;
} 