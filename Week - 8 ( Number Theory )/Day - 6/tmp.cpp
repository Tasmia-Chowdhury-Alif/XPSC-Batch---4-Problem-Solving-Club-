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

        vector<ll> k, x, y;
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

        // Calculate powers of a up to the limit of 1e6
        ll comp = 1;
        for (ll i = 0; i <= 20 && comp <= 1e6; i++)
        {
            x.push_back(comp);
            if (comp > 1e6 / a) break; // Prevent overflow
            comp *= a;
        }

        // Calculate powers of b up to the limit of 1e6
        comp = 1;
        for (ll i = 0; i <= 20 && comp <= 1e6; i++)
        {
            y.push_back(comp);
            if (comp > 1e6 / b) break; // Prevent overflow
            comp *= b;
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

        cout << cnt << endl;
    }
    return 0;
}
// Alhamdulillah
