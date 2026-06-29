#include<iostream>
using namespace std;
int main ()
{
    int y;
    cout<<"enter year:"<<endl;
    cin>>y;
    if(y%400==0) cout<<"leap year";
    else if (y%100==0) cout<<"not leap year";
    else if (y%4==0) cout<<"leap year";
    else cout<<"not leap year";
                                                                                                                                            
}