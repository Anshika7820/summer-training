#include <iostream>
using namespace std;

// for the sum of all elements in 2d-array---
// int main()
// {
//     int a[4][4] = {{1, 9, 3, 5}, {1, 2, 3, 4}, {1, 2, 3, 7}, {1, 2, 3, 2}};
//     int sum = 0;
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             sum = sum + a[i][j];
//         }
//     }
//     cout << sum << endl;
// }

// // for the sum of each rows in 2d-array----
// int main()
// {
//     int a[4][4] = {{1, 9, 3, 5}, {1, 2, 3, 4}, {1, 2, 3, 7}, {1, 2, 3, 2}};
//     for (int i = 0; i < 4; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < 4; j++)
//         {
//             sum = sum + a[i][j];
//         }
//         cout << sum << endl;
//     }
// }

// // return the index and sum of max sum of an row----
// int main()
// {
//     int a[4][4] = {{1, 9, 3, 5}, {1, 2, 3, 4}, {1, 2, 3, 7}, {1, 2, 3, 2}};
//     int pos = -1;
//     int max = -1;
//     for (int i = 0; i < 4; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < 4; j++)
//         {
//             sum = sum + a[i][j];
//             if (sum > max)
//             {
//                 max = sum;
//                 pos = i;
//             }
//         }
//     }
//     cout << pos << " " << max;
// }


//return max column sum in 2d-array--

int main()
{
    int a[4][4] = {{1, 9, 3, 5}, {1, 2, 3, 4}, {1, 2, 3, 7}, {1, 2, 3, 2}};
    int pos = -1;
    int max = -1;
    for (int i = 0; i < 4; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum = sum + a[j][i];
             if (sum > max)
            {
                max = sum;
                pos = i;
            }
        }
    }
    cout << pos << " " << max;
}