#include<iostream>
using namespace std;
class Student{
    private :
    char name[25];
    int rno;
    public :
    void input(){
        cout<<"Enter name"<<endl;
        cin>>name;
        cout<<"Enter roll number"<<endl;
        cin>>rno;
            }
            void output(){
                cout<<"Name is :"<<endl;
                puts(name);
                cout<<"Roll no is : "<<rno<<endl;
            }
};
class Exam : public Student{
    private:
    int marks[6];
    public :
    void indata();
   int add();
};
void Exam :: indata(){
    int i;
    input();
    cout<<"Enter marks in six subjects(out of 100) "<<endl;
    for(i=0; i<6; i++){
        cout<<"Enter marks in subject "<<i+1<<endl;
        cin>>marks[i];
    }
}
int Exam ::add(){
    int i=0;
    int sum = 0;
    for(i=0; i<6; i++){
        sum+=marks[i];
    }
    return sum;
}
class Result : public Exam{
    private: 
    int totalmarks;
public:
void display(){
    totalmarks = add();
    output();
    cout<<"Total marks : "<<totalmarks<<"/600"<<endl;
}
};
int main(){
Result r;
r.indata();
r.display();

    return 0;
}