#include <iostream>
using namespace std;
int main()
{
    int a[4][4] = {{1, 9, 3, 5}, {1, 2, 3, 4}, {1, 2, 3, 7}, {1, 2, 3, 2}};
    int toprow = 0;
    int bottomrow = 3;
    int leftcol = 0;
    int rightcol = 3;
    while (toprow <= bottomrow && leftcol <= rightcol)
    {
        for (int i = leftcol; i <= rightcol; i++)
        {
            cout << a[toprow][i] << " ";
        }
        toprow++;
        for (int i = toprow; i <= bottomrow; i++)
        {
            cout << a[i][rightcol] << " ";
        }
        rightcol--;
        for (int i = rightcol; i >= leftcol; i--)
        {
            cout << a[bottomrow][i] << " ";
        }
        bottomrow--;
        for (int i = bottomrow; i >= toprow; i--)
        {
            cout << a[i][leftcol] << " ";
        }
        leftcol++;
    }
}