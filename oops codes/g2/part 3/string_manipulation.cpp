#include <iostream>
using namespace std;
#include <string>
int main()
{
    string s1;
    cout << "enter the string " << endl;
    getline(cin, s1);
    cout << "current status of string " << s1 << endl;
    string s2 = "abc";
    s2 = s2 + s1;
    cout << "after contatenation " << s2 << endl;
    s2.pop_back();
    cout << "after pop back operation " << s2 << endl;
    s2.push_back('d');
    cout << "after push back of 'd' " << s2 << endl;
    cout << "length of the string " << s2.length() << endl;
    return 0;
}