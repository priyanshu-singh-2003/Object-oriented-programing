#include <iostream>
using namespace std;
class time
{
    private:
    int hrs,min,sec;
    public:
    void getdata()
    {
        int h,m,s;
        cout << "Enter time object (hrs min sec):";
        cin >> hrs >> min >> sec;
    }
    void Add(time t1,time t2)
    {
        time Sum;
        Sum.hrs=t1.hrs+t2.hrs;
        Sum.min=t1.min+t2.min;
        while (Sum.min>60)
        {
            Sum.min=Sum.min-60;
            Sum.hrs+=1;
        }
        Sum.sec=t1.sec+t2.sec;
        while (Sum.sec>60)
        {
            Sum.sec=Sum.sec-60;
            Sum.min+=1;
        }
        cout << "Total time :" << Sum.hrs << "hrs " << Sum.min << "min " << Sum.sec << "sec " << endl;
    }
};
int main()
{
    time t1,t2,t3;
    t1.getdata();
    t2.getdata();
    t3.Add(t1,t2);
    return 0;
}