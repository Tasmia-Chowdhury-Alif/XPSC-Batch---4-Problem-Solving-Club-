// Bismillah
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        auto ok = [&](ll mid)
        {
            ll total = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] < mid)
                {
                    total += (mid - a[i]);
                }
            }

            return (total <= m);
        };

        ll l = 1, r = 1e10, mid, ans;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (ok(mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
// Alhamdulillah

// // Bismillah
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, w;
//         cin >> n >> w;

//         vector<int> a(n);
//         map<int, int> cnt;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             cnt[a[i]]++;
//         }

//         sort(a.begin(), a.end());

//         ll ans = 1;
//         int prev_pil = 0;

//         for (int i = 0; i < n; i++)
//         {
//             ll level = a[i] + 1;

//             int cur_pil = cnt[a[i]];
//             // cout << i << "+" << cur_pil << " => ";
//             i += cur_pil - 1;
//             // cout << i << endl;
//             int need = (cur_pil + prev_pil); // * (a[i+1] - level - 1)
//             prev_pil += cur_pil;

//             if (need <= w)
//             {
//                 ans = level;
//                 w -= need;
//             }
//             else
//             {
//                 break;
//             }
//         }

//         // cout << ans << " - "<< w;

//         if (w >= n)
//         {
//             ll level = w / n;
//             // cout <<  " => " << level;
//             ans += level;
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }
// // Alhamdulillah