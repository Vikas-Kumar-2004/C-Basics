#include<iostream>
using namespace std;
int main()
{
    int x=5;
    int *ptr=&x;
    //int *p=&ptr; wrong
    int **p=&ptr;
    cout<<x<<endl; //value of x
    cout<<*ptr<<endl;//value of x
    cout<<**p<<endl;//value of x
    cout<<&x<<endl;//adrss of x
    cout<<ptr<<endl;//adress of x
    cout<<*p<<endl; //adress of x
}