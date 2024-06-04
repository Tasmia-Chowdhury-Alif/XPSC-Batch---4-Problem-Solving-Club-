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
        int n, q;
        cin >> n >> q;

        int sum = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        sort(a.begin(), a.end());

        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i] << " ";
        // }
        // cout << endl;

        vector<int> pref(n);
        pref[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            pref[i] = a[i] + pref[i - 1];
        }

        vector<int> suff(n);
        suff[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            suff[i] = a[i] + suff[i + 1];
        }
        reverse(suff.begin(), suff.end());

        // for (int i = 0; i < n; i++)
        // {
        //     cout << pref[i] << " ";
        // }
        // cout << endl;

        // for (int i = 0; i < n; i++)
        // {
        //     cout << suff[i] << " ";
        // }
        // cout << endl;

        while (q--)
        {
            int x;
            cin >> x;

            if (x > sum)
            {
                cout << -1 << endl;
                continue;
            }

            auto it1 = lower_bound(pref.begin(), pref.end(), x);
            auto it2 = lower_bound(suff.begin(), suff.end(), x);

            // cout << x << " => " << (it1 - pref.begin()) << " , " << (it2 - suff.begin()) << endl;

            int p = (it1 - pref.begin()) + 1;
            int s = (it2 - suff.begin()) + 1;
            if (it1 == pref.end())
            {
                p = INT_MAX;
            }
            if (it2 == suff.end())
            {
                s = INT_MAX;
            }
            cout << min(p, s) << endl;
        }
    }
    return 0;
}
// Alhamdulillah