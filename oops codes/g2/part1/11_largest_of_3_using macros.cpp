#include <iostream>
using namespace std;
#define max(a, b, c) a > b ? (a > c ? a : c) : (b > c ? b : c);
int main()
{
    int a, b, c;
    cout << "Enter three numbers : \n";
    cin >> a >> b >> c;
    int big = max(a, b, c);
    cout << "The biggest number is : " << big << endl;
    return 0;
}
