#include <iostream>
using namespace std;
template <typename A>
A square(A a)
{
    return a * a;
}
int main()
{
    cout << "Enter the integer whose square you wanna find : ";
    int a;
    cin >> a;
    int gg;
    gg = square(a);
    cout << "Square of the integer " << a << " : " << gg << endl;
    cout << "Enter the double whose square you wanna find : ";
    double b;
    cin >> b;
    double wp;
    wp = square(b);
    cout << "Square of the double " << b << " : " << wp;
    return 0;
}