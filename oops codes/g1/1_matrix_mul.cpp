#include <iostream>
using namespace std;
class matrix
{
    int i, j, a[10][10], b[10][10], c[10][10], row1, row2, col1, col2, k;

public:
    void getdata();
    void putdata();
    void multiply();
};
void matrix::getdata()
{
    cout << "Enter row size & column size of the first matrix:";
    cin >> row1 >> col1;
    cout << "Enter the elements for" << row1 << "*" << col1 << "matrix:";
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter the row size & column size of second matrix:";
    cin >> row2 >> col2;
    if (col1 == row2)
    {
        cout << "Enter the elements for" << row2 << "*" << col2 << "matrix:";
        for (i = 0; i < row2; i++)
        {
            for (j = 0; j < col2; j++)
            {
                cin >> b[i][j];
            }
        }
        multiply();
        putdata();
    }
    else
        cout << "multiplication is not possible";
}
void matrix::multiply()
{
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < col1; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < row2; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }
}
void matrix::putdata()
{
    cout << "resultant matrix is:";
    for (i = 0; i < row1; i++)
    {
        cout << "\n";
        for (j = 0; j < col2; j++)
        {
            cout << "\t" << c[i][j];
        }
    }
}
int main()
{
    matrix obj;
    obj.getdata();
}