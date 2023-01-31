//factorial
#include<iostream>
using namespace std;
int fact(int n);
int main()
{
    int n;
    cout<< "Enter the number:"<<endl;
    cin>>n;
    cout<<"Factorial is "<<fact(n);
    return 0;
}
int fact(int n)
{
    int f;
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        f = fact(n - 1) * n;
    }
    return f;
}