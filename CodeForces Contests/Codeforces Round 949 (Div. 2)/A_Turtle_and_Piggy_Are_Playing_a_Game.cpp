// Bismillah
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
        ll l, r;
        cin >> l >> r;

        ll tartale;
        if (r % 2 == 0)
        {
            tartale = r;
        }
        else
            tartale = r - 1;

        ll ans = 0;
        while (tartale > 1)
        {
            tartale = (tartale / 2);
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
// Alhamdulillah
