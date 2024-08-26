// Bismillah
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    while (T--)
    {
        ll a, b, l;
        cin >> a >> b >> l;

        vector<ll> k;
        vector<ll> x;
        vector<ll> y;
        // calculating all the divisors of l
        for (ll i = 1; i * i <= l; i++)
        {
            if (l % i == 0)
            {
                k.push_back(i);
                if (i != l / i)
                {
                    k.push_back(l / i);
                }
            }
        }

        ll cmp;
        for (ll i = 0; i <= 20; i++)
        {
            cmp = pow(a, i);
            if (cmp <= 1e6)
                x.push_back(cmp);
            else
                break;
        }
        for (ll i = 0; i <= 20; i++)
        {
            cmp = pow(b, i);
            if (cmp <= 1e6)
                y.push_back(cmp);
            else
                break;
        }

        ll cnt = 0;
        for (int m = 0; m < k.size(); m++)
        {
            int f = 0;
            for (ll i = 0; i < x.size(); i++)
            {
                for (ll j = 0; j < y.size(); j++)
                {
                    if ((k[m] * x[i] * y[j]) == l)
                    {
                        f = 1;
                        cnt++;
                        break;
                    }
                }
                if (f)
                {
                    break;
                }
            }
        }

        cout << cnt << "\n";
    }
    return 0;
}
// Alhamdulillah