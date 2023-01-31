#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    char name[50];
    int age;
    char sex;
    fstream f;
    f.open("file.txt", ios::out);
    cout << "Enter name\n";
    cin >> name;
    cout << "Enter age\n";
    cin >> age;
    cout << "Enter sex\n";
    cin >> sex;
    f << name << " ";
    f << age << " ";
    f << sex;
    return 0;
}