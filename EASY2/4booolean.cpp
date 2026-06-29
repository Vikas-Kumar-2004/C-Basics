#include<iostream>
using namespace std;
int main(){
    bool p=false;
    bool q=false;
    bool r=true;
    cout<<(p==q==r);
    // we can take into int data type;
    //if we do like this
    // cout<<(p==(q==r));
    // then it calculate first q==r
}
