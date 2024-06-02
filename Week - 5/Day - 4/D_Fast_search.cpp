// Bismillah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;

    ll k;
    cin >> k;
    while (k--)
    {
        ll x, y;
        cin >> x >> y;

        auto it1 = lower_bound(a.begin(), a.end(), x);
        auto it2 = upper_bound(a.begin(), a.end(), y);

        cout << it2 - it1 << " ";

        // ll p = -1, q = -1;

        // ll l = 0, r = n - 1, mid;
        // while (l <= r)
        // {
        //     mid = (l + r) / 2;
        //     if (a[mid] >= x)
        //     {
        //         p = mid;
        //         r = mid - 1;
        //     }
        //     else
        //         l = mid + 1;
        // }

        // l = 0;
        // r = n - 1;
        // while (l <= r)
        // {
        //     mid = (l + r) / 2;
        //     if (a[mid] >= y)
        //     {
        //         q = mid;
        //         r = mid - 1;
        //     }
        //     else
        //         l = mid + 1;
        // }
        // // cout << p << "," << r << " => ";

        // if (p != -1 and q != -1 and q - p > 0)
        // cout << q - p + 1 << " ";
        // else
        // cout << 0 << " ";
    }

    return 0;
}
// Alhamdulillah