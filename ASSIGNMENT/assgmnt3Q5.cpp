#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the sides of triangle"<<endl;
    cin>>a>>b>>c;
  if(a==b&&b==c)  cout<<"equilateral";

else if(a==b||b==c||a==c) cout<<"isosceles";
else cout<<"scalene";    
    
    

    }