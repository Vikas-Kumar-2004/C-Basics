#include<iostream>
using namespace std;
class Person{
    private:
    string name;
    int age;
    public:
    Person(){
        name="unknown";
        age=0;
        cout<<"default constructor called"<<endl;
    }
    Person(string name,int age ){
        this->name=name;
        this->age=age;
        cout<<"Parameter constructor called"<<endl;
    }
    Person(const Person &p){
        name=p.name;
        age=p.age;
        cout<<"Copy constructor called"<<endl;

    }
    void display(){
        cout<<"Name:"<<name<<endl<<"Age"<<age<<endl;
    }
};

int main(){
    Person p1;
    p1.display();
    Person p2("Alice",23);
    p2.display();
    Person p3=p2;
    p3.display();

}