#include <iostream>
using namespace std;
class First
{
private:
    int book_no;
    char bname[50];

public:
    void input()
    {
        cout << "Enter book number " << endl;
        cin >> book_no;
        cout << "Enter book name " << endl;
        cin >> bname;
    }
    void output()
    {
        cout << "Book No. : " << book_no << endl;
        cout << "Book Name : ";
        puts(bname);
        cout << endl;
    }
};
class second
{
private:
    char author[50];
    char publisher[50];

public:
    void indata()
    {
        cout << "Enter author " << endl;
        cin >> author;
        cout << "Enter publisher " << endl;
        cin >> publisher;
    }
    void outdata()
    {
        cout << "Author : ";
        puts(author);
        cout << "Publisher : ";
        puts(publisher);
    }
};
class third : public First, public second
{
private:
    int pgno;
    int year;

public:
    void in()
    {
        input();
        indata();
        cout << "Enter number of pages : " << endl;
        cin >> pgno;
        cout << "Enter year : " << endl;
        cin >> year;
    }
    void out()
    {
        output();
        outdata();

        cout << "\nNumber of pages : " << pgno << endl;
        cout << "\nRelease year : " << year;
    }
};

int main()
{
cout << "\n\nProgram By PRIYANSHU SINGH, Roll No->86, ITB";
    third t[5];

    int i, n;

    cout << "\n\nEnter number of enteries to be done:";

    cin >> n;

    for (i = 0; i < n; i++)
    {
        t[i].in();
    }

    for (i = 0; i < n; i++)
    {
        cout << endl
             << endl
             << "Detail no. "
             << "==" << i + 1 << endl;
        t[i].out();
    }

    return 0;
}




