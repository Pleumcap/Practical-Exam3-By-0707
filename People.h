#include <iostream>
#include <string>
using namespace std;

class People{
    private:
        string name;
        char gender;
        unsigned int age;
    public: 
        People(string ,char ,unsigned int);
        void show();
};

People::People(string n="Unknown",char g='F',unsigned int a=69){
    name=n;
    gender=toupper(g);
    age=a;
}

void People::show(){
    for(int i=0;i<34;i++) cout<<"-";
    cout<<endl;
    cout<<"NAME: "<<name<<endl;
    cout<<"GENDER: ";
    if(gender=='M') cout<<"MALE"<<endl;
    else cout<<"FEMALE"<<endl;
    cout<<"AGE: "<<age<<" years"<<endl;
    for(int i=0;i<34;i++) cout<<"-";
    cout<<endl;
}
