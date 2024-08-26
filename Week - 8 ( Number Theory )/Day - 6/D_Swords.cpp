// Bismillah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll x = *max_element(a.begin(), a.end());

    ll z = 0, lost = 0;
    for (int i = 0; i < n; i++)
    {
        // store the GCD of all the sowrds which have been lost in z  ;
        z = __gcd(z, x - a[i]);
        lost += x - a[i];
    }

    ll y = lost / z;

    cout << y << " " << z << endl;
    return 0;
}
// Alhamdulillah

// #include <iostream>
// #include <algorithm>

// using namespace std;
// typedef long long ll;

// void solve()
// {
//     ll n;
//     cin >> n;
//     ll a[n];
//     for (ll i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     ll mx = *max_element(a, a + n);
//     ll sum = 0;
//     for (ll i = 0; i < n; i++)
//     {
//         sum += a[i];
//     }
//     ll z = 0;
//     for (ll i = 0; i < n; i++)
//     {
//         z = __gcd(z, mx - a[i]);
//     }
//     ll y = ((mx * n) - sum) / z;
//     cout << y << ' ' << z << endl;
// }

// int main()
// {
//     solve();
//     return 0;
// }

// // Bismillah
// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     vector<int> a(n);
//     int mx = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         mx = max(mx, a[i]);
//     }

//     ll z = 0;
//     for (int i = 0; i < n; i++)
//     {
//         z += (mx - a[i]);
//     }

//     cout << 1 << " " << z << endl;
//     return 0;
// }
// // Alhamdullllah