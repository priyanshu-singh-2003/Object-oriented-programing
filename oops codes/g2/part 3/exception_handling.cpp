#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[] = {4, 5, 6, 7, 8, 9};
    int n;
    try
    {
        cin >> n;
        if (n > 6)
        {
            throw n;
        }
        cout << "the " << n - 1 << " th element in the array is " << arr[n - 1];
    }
    catch (int n)
    {
        cout << "index out of range";
    }
    return 0;
}