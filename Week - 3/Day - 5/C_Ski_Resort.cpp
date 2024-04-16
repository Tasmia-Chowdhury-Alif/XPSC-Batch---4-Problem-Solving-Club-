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
        ll n, k, q;
        cin >> n >> k >> q;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll ans = 0;
        ll consicutive = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] <= q)
            {
                consicutive++;

                if (i == n - 1 or a[i + 1] > q)
                {
                    if (consicutive >= k)
                    {
                        ll x = consicutive - k + 1;

                        ans += (x * (x + 1)) / 2;
                    }
                    consicutive = 0;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define Faster                        \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(0);                       \
//     cout.tie(0);

// int main()
// {
//     Faster;
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         ll n, k, q;
//         cin >> n >> k >> q;

//         vector<ll> a(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         ll ans = 0;

//         ll cons = 0; // consicutive element
//         for (int i = 0; i < n; i++)
//         {
//             if (a[i] <= q)
//             {
//                 cons++;
//                 if (i == n - 1 or a[i + 1] > q)
//                 {
//                     if (cons >= k)
//                     {
//                         ll x = cons - k + 1LL;
//                         ll add = (x * (x + 1LL)) / 2LL;
//                         ans += add;
//                     }
//                     cons = 0;
//                 }
//             }
//         }

//         cout << ans << endl;
//     }
//     return 0;
// }
