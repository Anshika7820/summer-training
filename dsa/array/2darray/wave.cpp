//print the wave matrix--(column wise)
#include <iostream>
using namespace std;


// int main()
// {
//     int a[4][4] = {{1, 9, 3, 5}, {1, 2, 3, 4}, {1, 2, 3, 7}, {1, 2, 3, 2}};
//     for (int i = 0; i < 4; i++)
//     {
//         if (i % 2 == 0)
//         {
//             for (int j = 0; j < 4; j++)
//             {
//                 cout << a[j][i]<<" ";
//             }
//         }
//         else
//         {
//             for (int j = 3; j >= 0; j--)
//             {
//                 cout << a[j][i]<<" ";
//             }
//         }
//     }
// }



//print the wave matrix--(row wise)

int main()
{
    int a[4][4] = {{1, 9, 3, 5}, {1, 2, 3, 4}, {1, 2, 3, 7}, {1, 2, 3, 2}};
    for (int i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 3; j >=0; j--)
            {
                cout << a[i][j]<<" ";
            }
        }
        else
        {
            for (int j = 0; j < 4; j++)
            {
                cout << a[i][j]<<" ";
            }
        }
    }
}