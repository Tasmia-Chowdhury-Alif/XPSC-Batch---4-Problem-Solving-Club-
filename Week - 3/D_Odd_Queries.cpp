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
        int n, q;
        cin >> n >> q;
        ll a[n], pref[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        pref[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            pref[i] = a[i] + pref[i - 1];
        }
        // 2 2 1 3 2
        // 2 4 5 8 10

        // 2 3 3 3 2
        // 2 5 8 11 13
        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            l--;
            r--;

            ll sum = pref[n - 1];
            if (l > 0)
                sum -= (pref[r] - pref[l - 1]);
            else
                sum -= pref[r];

            sum += (r - l + 1) * k;
            // cout<<sum<<" ";
            if (sum % 2 != 0)
            {
                cout << "YES\n";
            }
            else
                cout << "NO\n";
        }
    }

    return 0;
}