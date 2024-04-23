#include<iostream>
#include<conio.h>
using namespace std;

int main(){
int a=10;
int*b=&a;
cout<<"The address of a="<<&a<<endl;
cout<<"The address of b="<<b<<endl;
cout<<"the value of b="<<*b<<endl;
int**c=&b;
cout<<"the address of b="<<&b<<endl;
cout<<"the address of b="<<c<<endl;
cout<<"the value of address of c="<<*c<<endl;
cout<<"the value of c="<<**c<<endl;


getchar();
}