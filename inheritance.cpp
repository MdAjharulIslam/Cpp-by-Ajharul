#include<iostream>
using namespace std;

class parson {

    public:
    string name;
    int age;

    void display1(){
    
    cout<<"name=  "<<name<<endl;
    cout<<"Age=   "<<age<<endl;
    }

};
class student :public parson{

    public:
    int id;
    void display2(){
    cout<<"ID=   "<<id<<endl;
    display1();
    
    
    }

};




int main()
{
    
    student s1;
    s1.name="Ajharul islam";
    s1.age=20;
    s1.id=1336;
    s1.display2();
    
    return 0;
}