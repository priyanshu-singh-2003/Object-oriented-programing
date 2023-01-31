//factorial
#include<iostream>
using namespace std;
// same name different functionalities 
// depending on no of parameters aur data type of parameters and squence
float pi=3.14;

int area(int side){
    int a = side *side;
    return a;
};//square
double area(double Side ){
    return 6*Side*Side;
};//cube
float area(float radius){
    return pi*radius*radius;
};//circle

float area(int length, int breath){
    return length*breath;
};//rectangle

float area(int height , float base){
    return height*base;
};//parallellogram

float area(float height , int base){
    return 0.5*height*base;
};//triangle

float area(int a , int b , int c){
    return 2*((a*b)+(b*c)+(c*a));
};//cuboid

int main()
{
   int a,b;
   float p , q ,c;
    a = 3;
    b = 6;
    c = 3.0;
    p = 6.0;
    q = 4.0;
    double r = 60.45;
    cout<< " area of circle ="<< area(p)<<endl;
    cout<< " area of square ="<< area(a)<<endl;
    cout<< " area of triangle ="<<area(c,b)<<endl;

    return 0;
}