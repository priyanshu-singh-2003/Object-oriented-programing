#include <iostream>
using namespace std;

class fib
{
    int f, f1, f2, m;
    public:
    fib(int n)
    {
        m = n;
    }
    fib(fib &x)
    {
        x.f1 = 0;
        x.f2 = 1;
        cout << "0 1 ";
        for (int i = 0; i < x.m; i++)
        {
            x.f = x.f1 + x.f2;
            cout << x.f << " ";
            x.f1 = x.f2;
            x.f2 = x.f;
        }
    }
};
int main()
{
    int n;
    class_name obj1;
    class_name obj2;
    obj1()
    cout<<"enter the length of the series : ";
    cin >> n;
    fib a(n);
    fib b(a);
    return 0;
}