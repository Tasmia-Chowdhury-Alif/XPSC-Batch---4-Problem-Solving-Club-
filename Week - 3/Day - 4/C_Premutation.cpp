#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int ans[n + 1];
        vector<int> pos[n + 1];

        int m = n;
        while (m--)
        {
            for (int i = 1; i <= n - 1; i++)
            {
                int v;
                cin >> v;

                pos[v].push_back(i);
            }
        }

        for (int i = 1; i <= n; i++)
        {
            sort(pos[i].begin(), pos[i].end());
        }

        for (int i = 1; i <= n; i++)
        {
            if (pos[i][n - 2] == n - 1)
            {
                if (pos[i][0] == n - 1)
                {
                    ans[n] = i;
                }
                else
                {
                    ans[n - 1] = i;
                }
            }
            else
            {
                //  pos[i][n-2] == max position of the value .
                ans[pos[i][n - 2]] = i;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     ll t, n, i, j, m;

//     cin >> t;

//     while (t--)
//     {
//         cin >> n;
//         ll ans[n + 1];

//         vector<ll> pos[n + 1];

//         m = n;

//         while (m--)
//         {
//             for (i = 1; i <= n - 1; i++)
//             {
//                 cin >> j;

//                 pos[j].push_back(i);
//             }
//         }

//         for (i = 1; i <= n; i++)
//         {
//             sort(pos[i].begin(), pos[i].end());
//         }

//         for (i = 1; i <= n; i++)
//         {
//             //  pos[i][n - 2] = Maximum position of i value .
//             if (pos[i][n - 2] == n - 1) // [n-2] because the i value is missing in just one array .
//             {
//                 if (pos[i][0] == n - 1)
//                 {
//                     ans[n] = i;
//                 }
//                 else
//                 {
//                     ans[n - 1] = i;
//                 }
//             }
//             else
//             {
//                 ans[pos[i][n - 2]] = i;
//             }
//         }

//         for (i = 1; i <= n; i++)
//         {
//             cout << ans[i] << " ";
//         }
//         cout << "\n";
//     }
// }