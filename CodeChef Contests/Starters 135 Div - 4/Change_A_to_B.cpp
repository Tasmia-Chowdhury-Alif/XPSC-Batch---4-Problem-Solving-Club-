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
        ll a, b, k;
        cin >> a >> b >> k;

        ll ans = 0;
        while (b > a)
        {
            if (b % k == 0 and b / k >= a)
            {
                b = b / k;
                ans++;
                // cout << "b / k" << endl;
            }
            else
            {
                if (b / k < a)
                {
                    ans += (b - a);
                    b -= (b - a);
                    // cout << "b - a" << endl;
                }
                else
                {
                    ans += (b % k);
                    b -= (b % k);
                    // cout << "b - (b % k)" << endl;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
// Alhamdulillah