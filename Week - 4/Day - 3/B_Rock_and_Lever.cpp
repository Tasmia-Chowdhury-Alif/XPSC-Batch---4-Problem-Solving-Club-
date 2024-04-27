// Bismillah
#include <bits/stdc++.h>
#define ll long long int
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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int ans = 0;

        for (int i = 5; i >= 0; i--)
        {
            int cnt = 0;
            for (int j = 0; j < n; j++)
            {
                if (pow(2, i) <= a[j] and a[j] < pow(2, i + 1))
                {
                    cnt++;
                }
            }

            ans += (cnt * (cnt - 1)) / 2; // n x (n-1) / 2 ; count of natural numbers;
        }
        cout<<ans<<endl;
    }
    return 0;
}
// Alhamdulillah

// #include <bits/stdc++.h>
// #define ll long long
// #define endl "\n"

// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0), cout.tie(0);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         ll a[n];
//         for (ll i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         ll ans = 0;
//         for (ll i = 5; i >= 0; i--)
//         {
//             ll cnt = 0;
//             for (ll j = 0; j < n; j++)
//             {
//                 if (pow(2, i) <= a[j] and a[j] < pow(2, (i + 1)))
//                 {
//                     // cout << pow(2, i) << " " << pow(2, (i + 1)) << " : ";
//                     // cout << i << " " << a[j] << " : ";
//                     ++cnt;
//                 }
//             }
//             ans += (cnt * (cnt - 1)) / 2;
//         }
//         cout << ans << endl;
//     }
// }

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

//         vector<int> a(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         ll cnt = 0;
//         for (int i = 0; i < n - 1; i++)
//         {
//             for (int j = i + 1; j < n; j++)
//             {
//                 if ((a[i] & a[j]) >= (a[i] ^ a[j]))
//                 {
//                     cnt++;
//                     // cout << a[i] << " " << a[j] << " : ";
//                     // i++;
//                     // j = i+1;
//                 }
//             }
//         }

//         cout << cnt << endl;
//     }
//     return 0;
// }
// // Alhamdulillah