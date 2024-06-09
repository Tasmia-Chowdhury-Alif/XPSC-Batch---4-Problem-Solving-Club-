// Bismillah
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
 
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
 
        auto ok = [&](ll mid)
        {
            ll total = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] < mid)
                {
                    total += (mid - a[i]);
                }
            }
 
            return (total <= m);
        };
 
        ll l = 1, r = 1e10, mid, ans;
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
 
        cout << ans << endl;
    }
    return 0;
}
// Alhamdulillah