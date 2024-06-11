#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int maxN = 1e9;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l;
        cin >> n >> l;

        vector<int> ans;

        int idx = 2;
        while (true)
        {
            if (ans.size() == n or (l * idx) > maxN)
            {
                break;
            }
            ans.push_back(l * idx);
            idx++;
        }

        if (ans.size() < n)
        {
            int cur = l / 2;
            while (true)
            {
                if (ans.size() == n)
                {
                    break;
                }
                ans.push_back(cur);
                cur--;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, l;
//         cin >> n >> l;

//         vector<int> ans(n);
//         if (l >= 1e9)
//         {
//             int cur = l / 2, i = 0;
//             while (i < n)
//             {
//                 ans[i] = cur;
//                 cur--;
//                 i++;
//             }
//         }
//         else
//         {
//             int cur = l * 2, i = 1;
//             ans[0] = l ;
//             while (i < n)
//             {
//                 ans[i] = cur;
//                 cur *= i + 1;
//                 i++;
//             }
//         }

//         for (int i = 0; i < n; i++)
//         {
//             cout << ans[i] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }