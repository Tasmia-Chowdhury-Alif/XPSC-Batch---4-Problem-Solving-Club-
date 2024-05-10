
// #include <bits/stdc++.h>
// #include <iostream>
// #define int long long
// #define pb push_back
// #define pf push_front
// #define fast_io                   \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// #define pie 3.1415926536
// #define ff first
// #define ss second
// #define all(v) v.begin(), v.end()
// #define f(i, n) for (int i = 0; i < n; i++)
// #define double long double
// using namespace std;

// void STR()
// {
// int n;
// cin >> n;
// int a[n];
// for (int i = 0; i < n; i++)
//     cin >> a[i];
// sort(a, a + n);
// reverse(a, a + n);
// multiset<int> m;
// for (int i = 0; i < n; i++)
// {
//     if (!m.size())
//     {
//         m.insert(a[i]);
//     }
//     else
//     {
//         int x = *(--m.end());
//         if (x >= a[i])
//         {
//             m.erase(--m.end());
//             m.insert((x ^ a[i]));
//         }
//         else
//         {
//             m.insert(a[i]);
//         }
//     }
// }
// cout << m.size() << endl;
// }

// signed main()
// {

//     fast_io int t = 1;
//     int temp = 1;
//     cin >> t;
//     //
//     while (t--)
//     {
//         // cout<<"Case #"<<temp<<": ";
//         // cout<<"Case "<<temp<<": ";
//         temp++;
//         STR();
//     }
// }

// Bismillah
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

        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<ll>());

        multiset<ll> ml;
        for (ll i = 0; i < n; i++)
        {
            if (ml.empty())
            {
                ml.insert(a[i]);
            }
            else
            {
                ll tp = *(--ml.end());
                if (tp >= a[i])
                {
                    ml.erase(--ml.end());
                    ml.insert((tp ^ a[i]));
                }
                else
                {
                    ml.insert(a[i]);
                }
            }
        }
        cout << ml.size() << "\n";
    }
    return 0;
}
// Alhamdulillah

// // Bismillah
// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;

//         vector<ll> a(n);
//         for (ll i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         sort(a.begin(), a.end(), greater<int>());

//         priority_queue<ll> ml;
//         for (ll i = 0; i < n; i++)
//         {
//             if (ml.empty())
//             {
//                 ml.push(a[i]);
//             }
//             else
//             {
//                 if (ml.top() >= a[i])
//                 {
//                     ll tp = ml.top();
//                     ml.pop();
//                     ml.push((tp ^ a[i]));
//                 }
//                 else
//                 {
//                     ml.push(a[i]);
//                 }
//             }
//         }
//         cout << ml.size() << "\n";
//     }
//     return 0;
// }
// // Alhamdulillah