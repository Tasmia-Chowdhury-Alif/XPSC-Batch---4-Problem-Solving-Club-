// Bismillah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string t;
    cin >> t;

    string p;
    cin >> p;

    int n = t.size();
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i]--;
    }

    auto ok = [&](int mid)
    {
        vector<bool> bad(n); // finding the bad indexs
        for (int i = 0; i <= mid; i++)
        {
            bad[a[i]] = true;
        }

        int j = 0;
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            if (t[i] == p[j] and !bad[i])
            {
                j++;
            }
            if (j == p.size())
            {
                found = true;
                break;
            }
        }
        return found;
    };

    int ans = 0;
    int l = 0, r = n - 1, mid;
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

    cout << ans + 1;

    return 0;
}
// Alhamdulillah