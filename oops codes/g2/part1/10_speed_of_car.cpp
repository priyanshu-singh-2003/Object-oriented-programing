// scope resolution operator

#include <iostream>
using namespace std;
 
class Bike
{

public:
    // Just the Function Declaration
    float max_Speed(float a, float b, float c);
};
// Defining the Speed function outside Bike class using ::
float Bike::max_Speed(float a, float b, float c)
{
    float max = a > b ? (a > c ? a : c) : (b > c ? b : c);
    return max;
}
 
int main()
{
    Bike bike;
    float a;
    float b;
    float c;
    cout << "enter the speed of car 1" << endl;
    cin >> a;
    cout << "enter the speed of car 2" << endl;
    cin >> b;
    cout << "enter the speed of car 3" << endl;
    cin >> c;
    cout << "max speed of car is " << bike.max_Speed(a, b, c) << endl;

    return 0;
}