#include<iostream>
using namespace std;
int main ()
{
    //take input and print half of the number
    int x;
    cout<<("enter the number")<<endl;
    cin>>x;
    //cout<<x/2; //valid for int ,we habe to do type cast now
    float y= (float)x;
    cout<<y/2;
 

}