#include<iostream>
using namespace std;
int main()

//checking profit or loss
    {
        int sp,cp,p,l;
        cout<<"enter the cp and sp of celling price of item"<<endl;
        cin>>cp>>sp;
        if(sp>cp){
        
            cout<<"profit"<<endl<<"profit is :"<<sp-cp;

        }
        if(sp<cp)
        {
        cout<<"loss"<<endl<<"loss is :"<<cp-sp;
    }
    if(sp==cp)
    {
        cout<<"no profit ,no loss";
    }
    }

