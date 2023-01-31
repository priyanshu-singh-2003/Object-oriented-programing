#include <iostream>
using namespace std;

class employee
{
    char name[30];
    char emp_code[10];
    char emp_depp[20];
    float basic_salary;
    float HRA;
    float DA;
    float TA;
    float net_salary;
    float tax;

public:
    void getdata()
    {
        cout << "enter employee name" << endl;
        cin >> name;
        cout << "enter employee code" << endl;
        cin >> emp_code;
        cout << "enter employee deppartment" << endl;
        cin >> emp_depp;
        cout << "enter employee basic_salary" << endl;
        cin >> basic_salary;
        cout << "enter employee HRA percentage" << endl;
        cin >> HRA;
        cout << "enter employee DA percentage" << endl;
        cin >> DA;
        cout << "enter employee TA percentage" << endl;
        cin >> TA;
        cout << "enter employee tax percentage" << endl;
        cin >> tax;
    }

    void display_salary()
    {
        float add = HRA + DA + TA;
        add = (add * basic_salary) / 100;
        net_salary = basic_salary + add - ((tax * basic_salary) / 100);
        cout << "net salary of the employee is " << net_salary << endl;
    }

} obj1;

int main()
{
    obj1.getdata();
    obj1.display_salary();
    return 0;
}