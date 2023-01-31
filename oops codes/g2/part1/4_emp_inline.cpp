#include <iostream>
using namespace std;

class employee
{
    char name[30];
    int age;
    char address[60];
    double salary;

public:
    // keword during defination

    void getdata();
    void display_data();
} emp1;
inline void employee::display_data()
{
    cout << "name of employee is " << name << endl;
    cout << "age of employee is " << age << endl;
    cout << "salary of employee is " << salary << endl;
    cout << "adress of employee is " << address << endl;
}
inline void employee::getdata()
{
    cout << "enter employee name " << endl;
    // multi word string input
    cin >> name;
    cout << "enter employee address " << endl;
    cin.getline(address, 60);
    cout << "enter employee salary " << endl;
    cin >> salary;
    cout << "enter employee age " << endl;
    cin >> age;
}
int main()
{
    cout << "programe by priyanshu IT B" << endl;
    emp1.getdata();
    emp1.display_data();
    return 0;
}
// it is a request to compiler.can be rejecected for complex code.
/* C++ provides an inline functions to reduce the function call overhead.
Inline function is a function that is expanded in line when it is called.
 When the inline function is called whole code of the inline function gets
 inserted or substituted at the point of inline function call.
  This substitution is performed by the C++ compiler at compile time.
   Inline function may increase efficiency if it is small.*/