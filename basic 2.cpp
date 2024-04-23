#include<iostream>
using namespace std;

int me(int a,int b){

int c=a+b;
return c;

}

int main()
{
    int num1,num2;
    cout<<"Enter the value of num1= ";
    cin>>num1;
    cout<<"Enter the value of num2= ";
    cin>>num2;
    cout<<"the value of sum="<<me(num1,num2);
    return 0;
}