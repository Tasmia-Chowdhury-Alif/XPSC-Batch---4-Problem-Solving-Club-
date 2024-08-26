// Bismillah
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool prime(ll n)
{
    if (n == 1)
        return false;

    for (ll i = 2; i <= sqrtl(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool square(ll n)
{
    ll x = sqrtl(n);
    return ((x * x) == n);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        ll n;
        cin >> n;

        // this print inside input loop is gonna give TLE error . do it outside .
        if (prime(sqrtl(n)) and square(n))
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
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

//     int T;
//     cin >> T;
//     while (T--)
//     {
//         ll n;
//         cin >> n;

//         map<ll, ll> cnt;

//         for (ll i = 2; i * i <= n; i++)
//         {
//             if (n % i == 0)
//             {
//                 while (n % i == 0)
//                 {
//                     cnt[i]++;
//                     n /= i;
//                 }
//             }
//         }

//         if (n > 1)
//         {
//             cnt[n]++;
//         }

//         ll div = 1;

//         for (auto [x, y] : cnt)
//         {
//             div *= (y + 1);
//             if(div > 3) break;
//         }

//         if (div == 3)
//             cout << "YES";
//         else
//             cout << "NO";
//         cout << endl;
//     }
//     return 0;
// }
// // Alhamdulillah