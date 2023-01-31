// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class complex
{
    float a, b;
//apna const
public:
// default constructor
// no parameters
    complex()
    {
        cout << "constructor with no parameters called" << endl;
    }
// parametrizd constructor
// parameters 
    complex(float x)
    {
        a = x;
        b = x;
    }
    complex(float x, float y)
    {
        a = x;
        b = y;
    }
    friend void calc(complex, complex);
};
void calc(complex p, complex q)
{
    cout << endl;
    cout << "Complex no-1 : " << p.a << " + " << p.b << "i" << endl;
    cout << "Complex no-2 : " << q.a << " + " << q.b << "i" << endl;
    cout << "The sum of the following complex numbers is " << p.a + q.a << " + " << p.b + q.b << "i" << endl;
    cout << endl;
    return;
}
int main()
{
    cout << "Program by priyanshu singh" << endl;
    float a, b;
    cout << "enter the real part of first copmplex number" << endl;
    cin >> a;
    cout << "enter the imaginary part of first complex number" << endl;
    cin >> b;
    complex c1(a, b);
    cout << "enter the real part of second copmplex number" << endl;
    cin >> a;
    cout << "enter the imaginary part of second complex number" << endl;
    cin >> b;
    complex c2(a, b);
    calc(c1, c2);
    cout << "test case: " << endl;
    complex c3(5);
    calc(c1, c3);
    cout << "test case: " << endl;
    complex c6;
    return 0;
}