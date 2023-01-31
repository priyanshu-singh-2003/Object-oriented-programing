#include <iostream>
using namespace std;
class student
{
private:
    int roll_no;
    char name[30];

public:
    void display_data()
    {
        cout << "Roll no : " << roll_no << endl;
        cout << "Name : "<< name << endl;
    }
    void get_data()
    {
        cout<<"Enter roll no : ";
        cin>>roll_no;
        cout<<"Enter name : ";
        cin>>name;
        display_data();
    }
}s1;
int main(int argc, char const *argv[])
{
    cout<<"PROGRAME BY PRIYANSHU SINGH"<<endl;

    s1.get_data();
    return 0;
}
