#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    fstream f;
    f.open("file.txt", ios::in);
    char n[50];
    int a;
    char s;
    f >> n >> a >> s;
    cout << "name " << n;
    cout << "\nage " << a;
    cout << "\nsex " << s;
    return 0;
}