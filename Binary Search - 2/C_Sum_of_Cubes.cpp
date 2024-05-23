// Bismillah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll mx = 1e4;
    vector<ll> pw;
    for (int i = 0; i <= mx; i++)
    {
        pw.push_back(pow(i, 3));
        // cout << pw[i] << " ";
    }

    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;

        bool flag = false;
        for (ll i = 0; i < x; i++)
        {
            if (pw[i] >= x)
            {
                break;
            }
            ll req = x - pw[i];

            ll l = 1, r = mx - 1, mid;
            while (l <= r)
            {
                mid = (l + r) / 2;
                if (pw[mid] == req)
                {
                    flag = true;
                    break;
                }
                else if (pw[mid] < req)
                {
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
            }
            if (flag)
            {
                break;
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
// Alhamdulillah