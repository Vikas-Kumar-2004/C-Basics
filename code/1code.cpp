#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter three numbers "<<endl;
    cin>>a>>b>>c;
    if (a>b)
    {  if (a>c)
        {                                                                   
        cout<<a<<"is greatest";

        }
        else //  c>a v.v.v. imp
        {
            cout<<c<<"is gratest";
        }
    }
    else//b>a
    {
         if(b>c)
         {
            cout<<b<<"is greatest";
         }
     else //c>b
     {
        cout<<c<<"is greatest";
     }
    }

    
}