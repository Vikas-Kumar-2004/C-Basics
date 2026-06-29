#include<iostream>
using namespace std ;
int main()
{
    float x;
    cout<<"enter the number"<<endl;
    cin>> x;  //-1.3
    int y= (int)x;  //-1
    if(y<0)
    {
        y=y-1;//
    }

    cout<<y;
}