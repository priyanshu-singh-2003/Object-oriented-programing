#include <iostream>
using namespace std;
// acess is unidirectional
// friend keyword is used during declaration.
// not a member of a class just a friend 
// can acess non public members
// acess is with the help of objects

class B;
class A
{
    int a;
   // declare private/public
    friend void larger(A o1 , B o2);
    public:
    void test1(){
        a=10;
    }
} o1;

class B
{
    int b;
    friend void larger(A o1, B o2);
    public:
    void test2(){
        b=20;
    }
} o2;

void larger(A o1, B o2)
{
   
    cout << "The larger number out of " << o1.a << " and " << o2.b << " is " << (o1.a > o2.b ? o1.a : o2.b) << endl;
}   

int main()
{
    
    o1.test1();
    o2.test2();

    larger(o1, o2);
    return 0;
}
