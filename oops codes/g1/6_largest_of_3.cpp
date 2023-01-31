#include <iostream>
using namespace std;
#define max(a, b, c) a > b ? (a > c ? a : c) : (b > c ? b : c)
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    int larg = max(x, y, z);
    cout << larg;
    return 0;
}