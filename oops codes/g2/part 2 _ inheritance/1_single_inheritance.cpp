#include <iostream>
using namespace std;

class basic_info
{
private:
    char name[25];
    int roll_no;
    char gender;

public:
    void getdata()
    {
        cout << "\nEnter name: ";
        gets(name);
        cout << "Enter rollno:";
        cin >> roll_no;
        cout << "Enter gender:";
        cin >> gender;
    };

    void putdata()
    {
        cout << "\nName :" << name<<endl;
        cout << "Roll No :" << roll_no << endl;
        cout << "Gender :" << gender << endl;
    };
};

class phy_fit : public basic_info
{
private:
    float ht;
    float wt;

public:
    void input()
    {
        cout << "Enter height: ";
        cin >> ht;
        cout << "Enter weight:";
        cin >> wt;       
    }
    void display()
    {
        cout << "Height : "<< ht;
        cout << "\nWeight :"<<wt;
    }
};

int main()
{
phy_fit obj;
obj.basic_info::getdata();
obj.input();
obj.basic_info::putdata();
obj.display();
 

    return 0;
}