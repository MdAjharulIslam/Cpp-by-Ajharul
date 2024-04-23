#include<iostream>
using namespace std;

class student {

    private:
    string name;
    public:
    void setvalue (string x){
    name=x;
    
    }
        string getname(){
            return name;
        
        }

};




int main()
{
    student s1;
    s1.setvalue("Md Ajharul Islam joy");
    cout<<"the name is "<<s1.getname();
    
    
    return 0;
}