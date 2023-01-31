#include <iostream>
using namespace std;
class multiplication
{
private:
    int m, n;
    int p, q;

    int a[20][20];
    int b[20][20];

public:
    void getdata()
    {
        cout << "enter the no of rows of matrix 1" << endl;
        cin >> m;
        cout << "enter the no of collumns of matrix 1" << endl;
        cin >> n;
        cout << "Enter matrix 1" << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }

        cout << "enter the no of rows of matrix 2" << endl;
        cin >> p;
        cout << "enter the no of collumns of matrix 2" << endl;
        cin >> q;
        cout << "Enter matrix 2" << endl;
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin >> b[i][j];
            }
        }
    }
    void multiply()
    {
        int sum = 0;
        int ans[10][10];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                for (int k = 0; k < p; k++)
                {
                    sum += a[i][k] * b[k][j];
                }
                ans[i][j] = sum;
                sum = 0;
            }
        }
        cout << "reultant matrix\n";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }
};
int main(int argc, char const *argv[])
{
    cout<<"Program by priyanshu IT b"<<endl;
    multiplication m;
    m.getdata();
    m.multiply();
    return 0;
}