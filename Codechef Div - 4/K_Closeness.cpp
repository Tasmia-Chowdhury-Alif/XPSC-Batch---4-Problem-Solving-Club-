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
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] %= k;
        }

        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i] << " ";
        // }
        // cout << endl;

        sort(a.begin(), a.end());

        int ans;
        // ans = a[n - 1] - a[0];
        // for (ll i = 0; i < n - 1; i++)
        // {
        //     if ((a[i] - a[i + 1] + k) < ans)
        //     {
        //         ans = a[i] + k - a[i + 1];
        //     }
        // }

        // if (a[0] + k - a[n - 1] >= 0)
        // {
        //     ans = min(a[n - 1] - a[0], a[0] + k - a[n - 1]);
        // }
        // else
        ans = a[n - 1] - a[0];

        // for (int i = 0; i < n - 1; i++)
        // {
        //     ans = min(ans, (a[i] + k - a[i + 1]));
        // }
        cout << ans << endl;
    }
    return 0;
}