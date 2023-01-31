#include <iostream>
using namespace std;
template <class A>
class m
{
private:
    A a, b;

public:
    m(A x, A y)
    {
        a = x;
        b = y;
        A result = (a >= b) ? a : b;
        cout << result << " is greater." << endl;
    }
    ~m()
    {
        cout << "destructor was called....." << endl;
    }
};
int main()
{
    int a, b;
    cout << "Enter the two integers you wanna compare : ";
    cin >> a >> b;
    m<int> g(a, b);
    cout << "Enter the two floats you wanna compare : ";
    float s, t;
    cin >> s >> t;
    m<float> h(s, t);
    return 0;
}