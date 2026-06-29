#include<iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"Animal is eating"<<endl;
    }
};

class Bird{
    public:
    void fly(){
        cout<<"Bird  is flying"<<endl;
    }
};

class Bat:public Animal,public Bird{
    public:
    void sound(){
        cout<<"Bat is squeezing"<<endl;
    }
};
int main(){
   Bat b;
   b.eat();
   b.fly();
   b.sound();
    

}