#include <iostream>
using namespace std;
class shape
{
protected:
    double a, b;
public:
    void getdata(double x, double y)
    {
        a = x;
        b = y;
    }
    virtual void displaydata()
    {
    }
};
class triangle : public shape
{
public:
    void displaydata()
    {
        cout << "Area of triangle :" << 0.5 * a * b << endl;
    }
};
class rectangle : public shape
{
public:
    void displaydata()
    {
        cout << "Area of rectangle :" << a * b << endl;
    }
};
int main()
{
    cout << "Enter base and height of the triangle :";
    double b, h;
    cin >> b >> h;
    triangle t;
    shape *ptr = &t;
    ptr->getdata(b, h);
    ptr->displaydata();

    cout << "Enter sides of the rectangle :";
    cin >> b >> h;
    rectangle r;
    ptr = &r;
    ptr->getdata(b, h);
    ptr->displaydata();

    return 0;
}