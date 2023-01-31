#include<iostream>
using namespace std;

class myclass {
    // private:
    // char name[20];
    public:
    void displayname(char name[]){
        
        cout<< "My name is "<<name<<"\n";
    }
}myobject;
int main()
{
    char name[20];
    cout<<"Enter name"<<endl;
    cin>>name;
    myobject.displayname(name);
    return 0;
}