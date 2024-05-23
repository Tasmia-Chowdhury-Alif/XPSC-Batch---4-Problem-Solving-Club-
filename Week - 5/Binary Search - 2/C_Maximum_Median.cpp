// Bismillah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    auto ok = [&](ll m)
    {
        ll cnt = 0;
        for (int i = (n / 2); i < n; i++)
        {
            if (a[i] < m)
            {
                cnt += m - a[i];
            }
        }
        return (cnt <= k);
    };

    ll l = 1, r = 2e9, ans, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << ans;
    return 0;
}
// Alhamdulillah