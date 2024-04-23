#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class student
{
private :

    string name;

    public :

    int id;
    double gpa;

    void setvalue(string x){

    name=x;

    }
    string getvalue(){

    return name;
    }



};

class ajharul
{
public:

    int id;
    double gpa;


    ajharul(int a,double b){

    id=a;
    gpa=b;

    }
    void display(){

    cout<< id <<"  "<< gpa <<endl;

    }
};



int main(){

    cout<<"assalamoyalaikom everyone"<<endl;

    int i;

    cout<<"enter the value of d = "<<endl;

  //  cin>>d;


    for( i=0;i<50;i++){


        cout<< "md ajharul islam"<<endl;


    }




student s1;

s1.setvalue("ajharul islam ");
cout<<s1.getvalue()<<endl;



ajharul s2(101,3.45);
s2.display();

getch ();
}
