#include <iostream>
using namespace std;

// special fucntion
// same name as class
// no return type
// always defined in public
// for initialization of variables 
// is invoked automatically on creating the object

class connstructor_destructor
{
    int x;
public:
    connstructor_destructor()
    {
        cout << "Constructor called" << endl;
    }
    // de initialize 
    //tidle
    ~connstructor_destructor()
    {
        cout << "Destructor called" << endl;
    }
};
int main()
{
    connstructor_destructor obj;
    return 0;
}