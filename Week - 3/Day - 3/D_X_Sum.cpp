#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int grid[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }

        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int sum = 0;
                sum += grid[i][j];

                // left top
                int row = i - 1;
                int col = j - 1;
                while (row >= 0 && col >= 0)
                {
                    sum += grid[row][col];
                    row--;
                    col--;
                }

                // right top
                row = i - 1;
                col = j + 1;
                while (row >= 0 && col < m)
                {
                    sum += grid[row][col];
                    row--;
                    col++;
                }

                // bottom left
                row = i + 1;
                col = j - 1;
                while (row < n && col >= 0)
                {
                    sum += grid[row][col];
                    row++;
                    col--;
                }

                // bottom right
                row = i + 1;
                col = j + 1;
                while (row < n && col < m)
                {
                    sum += grid[row][col];
                    row++;
                    col++;
                }

                mx = max(mx, sum);
            }
        }
        cout << mx << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int mx = 0;
//     // vector<vector<int>> grid(n, vector<int>(m, 0));
//     int grid[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> grid[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             int temp_sum = 0;
//             temp_sum += grid[i][j];

//             // left top
//             int temp_i = i - 1;
//             int temp_j = j - 1;
//             while (temp_i >= 0 && temp_j >= 0)
//             {
//                 temp_sum += grid[temp_i][temp_j];
//                 temp_i--;
//                 temp_j--;
//             }

//             // right top
//             temp_i = i - 1;
//             temp_j = j + 1;
//             while (temp_i >= 0 && temp_j < m)
//             {
//                 temp_sum += grid[temp_i][temp_j];
//                 temp_i--;
//                 temp_j++;
//             }

//             // bottom left
//             temp_i = i + 1;
//             temp_j = j - 1;
//             while (temp_i < n && temp_j >= 0)
//             {
//                 temp_sum += grid[temp_i][temp_j];
//                 temp_i++;
//                 temp_j--;
//             }

//             // bottom right
//             temp_i = i + 1;
//             temp_j = j + 1;
//             while (temp_i < n && temp_j < m)
//             {
//                 temp_sum += grid[temp_i][temp_j];
//                 temp_i++;
//                 temp_j++;
//             }
//             mx = max(mx, temp_sum);
//         }
//     }
//     cout << mx << endl;
//     return 0;
// }