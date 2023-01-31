 #include<iostream>
using namespace std;
#include<string.h>
 
class String
{
    char *s;
    int size;
    public:
    String()
    {
        int l1;cout<<"Enter Length:";cin>>l1;
        s = new char[l1];
        cout<<"Enter String:";cin>>(s);
    }
    char* operator +(char *s1)
    {
        size = strlen(s)+strlen(s1);
        char *newString = new char[strlen(s)];
        strcpy(newString,s);
        strcat(newString,s1);
        return newString;
    }
    char* operator =(char *s1)
    {
        size = strlen(s1);
        s = new char[size];
        strcpy(s,s1);
        return s;
    }
    bool operator <=(char *s1)
    {
        return strcmp(s,s1);
    }
    void display()
    {
        cout<<"String stored in class = "<<s<<endl;
    }
    void displaylength()
    {
        cout<<"Length of string stored in class = "<<size<<endl;
    }
    void Tolower()
    {
        for(int i=0;i<size;i++)
            if(isupper(s[i]))s[i] = (char)tolower(s[i]);
    }
    void Toupper()
    {
        for(int i=0;i<size;i++)
            if(islower(s[i]))s[i] = (char)toupper(s[i]);
    }
};
 
int main()
{
    cout<<"Program to perform operations on string"<<endl;
    String s;
    int choice = -1;
    while(choice!=8)
    {
        char *d;
        int length;
        cout<<"1. Concatenation \n2. Copy \n3. Comparison \n4. Display String \n5. Display length \n6. Convert to lowercase \n7. Convert to uppercase \n8. Exit\n";
        cin>>choice;
        if(choice==1)
        {
            cout<<"Enter Length:";cin>>length;
            d = new char[length];
            cout<<"Enter String:";cin>>(d);
            s = s+d;
            s.display();
        }
        else if(choice==2)
        {
            cout<<"Enter Length:";cin>>length;
            d = new char[length];
            cout<<"Enter the String:";cin>>(d);
            s=d;s.display();
        }
        else if(choice==3)
        {
            cout<<"Enter Length:";cin>>length;
            d = new char[length];
            cout<<"Enter the String:";cin>>(d);
            cout<<"Strings are"<<((s<=d)?"not":"")<<" equal\n";
        }
        else if(choice==4)s.display();
        else if(choice==5)s.displaylength();
        else if(choice==6)s.Tolower();
        else if(choice==7)s.Toupper();
    }
    return 0;
}




























