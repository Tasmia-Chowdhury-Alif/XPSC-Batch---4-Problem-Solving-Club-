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
        int k;
        cin >> k;

        ll l = 0, r = 1e6, mid, ans = 0;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (mid % k == 0 and mid > k)
            {
                ans += mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        cout << ans << endl;
    }
    return 0;
}
// Alhamdulillah