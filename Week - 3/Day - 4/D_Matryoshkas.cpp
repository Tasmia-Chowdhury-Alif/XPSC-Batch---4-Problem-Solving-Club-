#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        reverse(a, a + n);

        vector<pair<ll, ll>> freq;

        int i = 0;
        while (i <= n-1)
        {
            int j = i;

            while (i < n && a[i] == a[j])
            {
                i++;
            }
            freq.push_back({a[j], (i - j)});
        }

        int m = freq.size();

        ll ans = freq[0].second;

        for (int i = 1; i < m; i++)
        {
            if (freq[i].first + 1 == freq[i - 1].first)
            {
                ans += max((freq[i].second - freq[i - 1].second), 0ll);
            }
            else
            {
                ans += freq[i].second;
            }
        }

        cout << ans << "\n";
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

//     ll t, n, i, j, ans;

//     cin >> t;

//     for (; t--;)
//     {
//         cin >> n;
//         ans = 0;

//         ll a[n];

//         vector<pair<ll, ll>> b;

//         for (i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         sort(a, a + n);
//         reverse(a, a + n);

//         for (i = 0; i < n;)
//         {
//             j = i;

//             while (i < n && a[i] == a[j])
//             {
//                 i++;
//             }

//             b.push_back({a[j], i - j});
//         }

//         n = b.size();

//         ans = b[0].second;

//         for (i = 1; i < n; i++)
//         {
//             if (b[i].first + 1 == b[i - 1].first)
//             {
//                 ans = ans + max(b[i].second - b[i - 1].second, 0ll);
//             }
//             else
//             {
//                 ans = ans + b[i].second;
//             }
//         }

//         cout << ans << "\n";
//     }
// }