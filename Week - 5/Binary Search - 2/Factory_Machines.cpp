// Bismillah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    auto ok = [&](ll min)
    {
        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            total += (min / a[i]);
            if (total >= t)
            {
                return true;
            }
        }
        return false;
    };

    ll l = 1, r = 1e18, ans, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans;

    return 0;
}
// Alhamdulillah