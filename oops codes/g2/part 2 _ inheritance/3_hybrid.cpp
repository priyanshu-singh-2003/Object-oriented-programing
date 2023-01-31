#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_number;

public:
    void get_number(int a)
    {
        roll_number = a;
    }
    void put_number()
    {
        cout << "Roll no : " << roll_number << endl;
    }
}; 
class test : public Student
{
protected:
    float sub1, sub2;

public:
    void get_marks(float x, float y)
    {
        sub1 = x;
        sub2 = y;
    }
    void put_marks()
    {
        cout << "subject 1 = " << sub1 << endl;
        cout << "subject 2 = " << sub2 << endl;
    }
};
class sports
{
protected:
    float score;

public:
    void get_score(float s)
    {
        score = s;
    }
    void put_score()
    {
        cout << "sports score =" << score << endl;
    }
};
class result : public test, public sports
{
    float total;

public:
    void display()
    {
        total = sub1 + sub2 + score;
        put_number();
        put_marks();
        put_score();
        cout << "Total Score : " << total << "/300" << endl;
    }
};
int main()
{
    cout << "Program by Priyanshu singh IT B " << endl;
    result obj;
    obj.get_number(12);
    obj.get_marks(99.0, 97.5);
    obj.get_score(98);
    obj.display();

    return 0;
}