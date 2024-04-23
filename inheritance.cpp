#include<iostream>
#include<conio.h>

using namespace std;

class student{

public:

    string name;

    int id;

    void display1(){

    cout<<"NAME= "<<name<<endl;

    cout<<"ID= " <<id<<endl;

    }
};


class person :public student
{
public:

    double gpa;

    void display2(){

    cout<<"GPA= "<<gpa<<endl;

    display1();

    }

};

int main(){


person s1;

s1.name="md ajharul islam";

s1.id=101;

s1.gpa=3.99;

s1.display2();




getch();
}
