#include <iostream>
using namespace std;
class factorial{
    int n;
    int fact;
  public:
  factorial(int num){
    n = num;
  }
  int calc(){
       fact = 1;
    for(int i = 1 ; i <= n ; i++){
        fact = fact*i;
    }
    return fact;
  }
  void display(){
      cout<<"The factorial of "<<n<<" is "<<fact;
  }
};

int main() {
    // Write C++ code here
    // factorial using constructor
    printf("PROGRAME BY PRIYANSHU SINGH\n");
    int num;
    cout<<"enter the number"<<endl;
    cin>>num;
    factorial object(num);
    object.calc();
    object.display();    

    return 0;
}