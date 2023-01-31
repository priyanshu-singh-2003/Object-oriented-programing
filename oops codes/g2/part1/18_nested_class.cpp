#include<iostream>
using namespace std;

class student{
    int roll_no;
    char name[30];
    char branch[30];
    class dob{
        int dd, mm , yyyy;
        public: 
        void getdata(){
            cout<<"Enter the DOB in dd / mm / yyyy : ";
            cin>>dd>>mm>>yyyy;
        }
        void diplay_data(){
            cout<<"DOB : "<< dd<<"/"<<mm <<"/"<<yyyy;
        }
    }dob;
    public:
    void get(){
        cout<<"Enter roll no : ";
        cin>>roll_no;
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter branch : ";
        cin>>branch;
        dob.getdata();
    }
    void display(){
        cout << "Roll no : " << roll_no << endl;
        cout << "Name : "<< name << endl;
        cout << "branch : "<< branch << endl;
        dob.diplay_data();
    }
}s;

int main(int argc, char const *argv[])
{
    cout<<"PROGRAME BY PRIYANSHU SINGH"<<endl;
    s.get();
    s.display();
    return 0;
}
