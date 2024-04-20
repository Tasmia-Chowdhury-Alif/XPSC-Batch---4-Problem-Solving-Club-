#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<pair<ll, ll>> a, b, c;
        ll x;
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back({x, i});
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            b.push_back({x, i});
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            c.push_back({x, i});
        }

        sort(a.begin(), a.end(), greater<>());
        sort(b.begin(), b.end(), greater<>());
        sort(c.begin(), c.end(), greater<>());

        ll ans = 0;

        // i don't need to iterate over all elements . i just need to first 3 elements . as these arrays are sorted .
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    if (a[i].second != b[j].second and a[i].second != c[k].second and b[j].second != c[k].second)
                    {
                        ans = max(ans, a[i].first + b[j].first + c[k].first);
                    }
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;

// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, res = 0;
//         cin >> n;
//         vector<pair<ll, ll>> va, vb, vc;
//         ll x;
//         for (ll i = 0; i < n; i++)
//         {
//             cin >> x;
//             va.push_back({x, i});
//         }
//         for (ll i = 0; i < n; i++)
//         {
//             cin >> x;
//             vb.push_back({x, i});
//         }
//         for (ll i = 0; i < n; i++)
//         {
//             cin >> x;
//             vc.push_back({x, i});
//         }
//         sort(va.begin(), va.end(), greater<>());
//         sort(vb.begin(), vb.end(), greater<>());
//         sort(vc.begin(), vc.end(), greater<>());

//         for (ll i = 0; i < 3; i++)
//         {
//             for (ll j = 0; j < 3; j++)
//             {
//                 for (ll k = 0; k < 3; k++)
//                 {
//                     if (va[i].second != vb[j].second and va[i].second != vc[k].second and vb[j].second != vc[k].second)
//                     {
//                         res = max(va[i].first + vb[j].first + vc[k].first, res);
//                     }
//                 }
//             }
//         }
//         cout << res << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<pair<int, int>> a;
//         vector<pair<int, int>> b;
//         vector<pair<int, int>> c;

//         for (int i = 0; i < n; i++)
//         {
//             int x;
//             cin >> x;
//             a.push_back({x, i});
//         }
//         for (int i = 0; i < n; i++)
//         {
//             int x;
//             cin >> x;
//             b.push_back({x, i});
//         }
//         for (int i = 0; i < n; i++)
//         {
//             int x;
//             cin >> x;
//             c.push_back({x, i});
//         }

//         sort(a.begin(), a.end());
//         sort(b.begin(), b.end());
//         sort(c.begin(), c.end());

//         int ai = n - 1, bi = n - 1, ci = n - 1;
//         ll sum = 0;

//         while (a[ai].second == b[bi].second or a[ai].second == c[ci].second or b[bi].second == c[ci].second)
//         {
//             if (a[ai].second == b[bi].second)
//             {
//                 if (b[bi].first == a[ai].first)
//                 {
//                     if (b[bi - 1].first < a[ai - 1].first)
//                     {
//                         ai--;
//                     }
//                     else
//                         bi--;
//                 }
//                 else if (b[bi].first < a[ai].first)
//                 {
//                     bi--;
//                 }
//                 else
//                     ai--;
//             }
//             if (a[ai].second == c[ci].second)
//             {
//                 if (a[ai].first == c[ci].first)
//                 {
//                     if (c[ci - 1].first < a[ai - 1].first)
//                     {
//                         ai--;
//                     }
//                     else
//                         ci--;
//                 }
//                 else if (c[ci].first < a[ai].first)
//                 {
//                     ci--;
//                 }
//                 else
//                     ai--;
//             }
//             if (b[bi].second == c[ci].second)
//             {
//                 if (b[bi].first == c[ci].first)
//                 {
//                     if (c[ci - 1].first < b[bi - 1].first)
//                     {
//                         bi--;
//                     }
//                     else
//                         ci--;
//                 }
//                 else if (c[ci].first < b[bi].first)
//                 {
//                     ci--;
//                 }
//                 else
//                     bi--;
//             }
//         }

//         sum = a[ai].first + b[bi].first + c[ci].first;
//         cout << a[ai].first << " " << b[bi].first << " " << c[ci].first << endl;
//         cout << sum << endl;

//         // for (int i = 0; i < n; i++)
//         // {
//         //     cout << a[i].first << " ";
//         // }
//         // cout << endl;
//     }

//     return 0;
// }