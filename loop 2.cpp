#include<iostream>
#include<conio.h>
using namespace std;

int main(){
int marks[5];

for(int i=0;i<5;i++){
cout<<"Enter a value for"<<i<<" ="<<endl;
cin>>marks[i];
}
cout<<"the marks are"<<endl;
for(int i=0;i<5;i++){

cout<<marks[i]<<"  "<<endl;
}

getchar();
}