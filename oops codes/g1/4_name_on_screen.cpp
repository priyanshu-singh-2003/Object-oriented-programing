#include <iostream>
using namespace std;
class myclass
{
    public:
    void displaydata()
    {
        cout << "Hello World" << endl;
    }
};
int main()
{
    cout << "This program was made by priyanshu singh\n" << endl;
    myclass myobj;
    myobj.displaydata();
    return 0;}