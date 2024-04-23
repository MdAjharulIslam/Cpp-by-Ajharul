#include<iostream>
#include<conio.h>
using namespace std;
class student 
{
        public:
        int id;
        double gpa;
    student ( int x,double y){
    
    id=x,gpa=y;
    }
    void display (){
    cout<<id<<"    "<<gpa<<endl;
    }
};
int main(){

student Ajharul (101,3.90);
Ajharul. display();
getchar;
}
