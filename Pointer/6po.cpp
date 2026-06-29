#include<iostream>
using namespace std;
int main()
{
    int x=4;
    int *p=&x;
    cout<<p<<endl;//print address of x
    p=p+1;//usi size ke poiner  ke number of 4 bytes increase hote ha
    cout<<p;
}