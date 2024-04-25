#include<iostream>
using namespace std;
int main(){

int number[3];

cout<<"enter 3 numbers = "<<endl;

for (int i=0;i<3;i++){

    cin>>number[i];
}
cout<<"printing value from the array in reverse order:"<<endl;

for (int i=3-1;i>=0;i--){

    cout<<number[i]<<endl;
}



return 0;
}
