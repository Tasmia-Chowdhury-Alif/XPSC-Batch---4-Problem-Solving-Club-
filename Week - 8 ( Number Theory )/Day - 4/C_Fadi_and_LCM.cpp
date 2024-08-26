// Bismillah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll N = 1e12;

ll lcm(ll a, ll b)
{
    ll g = __gcd(a, b);
    return a / g * b; // Checking for potential overflow
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll x;
    cin >> x;

    ll a = N, b = N, prev = N;
    for (ll i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            ll j = x / i;

            ll tmp = (i * j) / __gcd(i, j);
            // ll tmp = lcm(i, j);
            // if (tmp == x and j < b)
            // {
            //     a = i;
            //     b = j;
            // }
            if (tmp == x and max(i, j) < prev)
            {
                a = i;
                b = j;
                prev = max(i, j);
            }
        }
    }

    cout << a << " " << b;
    // cout << endl;
    // cout << lcm(2147483647, 2147483647);
    // cout << endl;
    // cout << lcm(1, 999999999989);

    return 0;
}
// Alhamdulillah