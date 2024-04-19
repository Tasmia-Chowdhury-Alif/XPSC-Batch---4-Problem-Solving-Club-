#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll ans = 0, l = 0, r = 0;
    multiset<ll> ms;

    while (r < n)
    {
        ms.insert(a[r]);
        ll mn = *ms.begin(), mx = *ms.rbegin();

        if ((mx - mn) <= k)
        {
            ans += ms.size();
            // cout<<ans<<endl;
        }
        else
        {
            while (l <= r)
            {
                mn = *ms.begin(), mx = *ms.rbegin();

                if ((mx - mn) <= k)
                {
                    ans += ms.size();
                    // cout << mx << " " << mn << " : " << ans << endl;
                    break;
                }

                auto it = ms.find(a[l]);
                ms.erase(it);
                l++;
            }
        }
        r++;
    }

    cout << ans;

    return 0;
}