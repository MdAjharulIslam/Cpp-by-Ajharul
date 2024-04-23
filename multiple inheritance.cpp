#include<iostream>
using namespace std;

class parson{
    public:
    void display(){
    
    cout<<"iam a parson"<<endl;
    }

};

class student:public parson{

    public:
void display (){
cout<<"iam a student "<<endl;


}
};

class teacher :public student{
    public:
    void display (){
    cout<<"iam a teacher"<<endl;
    }

};



int main(){

parson p1;
p1.display();
student s1;
s1.display ();
teacher t1;
t1.display();

return 0;
}