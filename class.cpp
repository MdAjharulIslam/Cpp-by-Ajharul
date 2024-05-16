#include<iostream>
#include<conio.h>
using namespace std;

class student
{
        public:
        int id;
        double gpa;
       ~ student (){
        cout<<"this is distractor"<<endl;
        }
        
    void display () {
    cout<<id<<"   "<<gpa<<endl;
    }
        student(int x,double y){
        id=x,gpa=y;
        }
        
        student(){
        
        cout<<"this is defult constraction"<<endl;
        }
};
int main(){
student obj;
student Ajharul;
student alim(101,3.50);

alim.display();

student suporna(102,3.40);
suporna.display ();
getchar;
}
