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
        int x, y;
        cin >> x >> y;

        ll ans = 1;

        for (int i = 1; i <= 10000; i++)
        {
            ll calc = ((x * 10) + (100 * i)) / (10 + i);
            if (calc >= y)
            {
                // cout<<calc<<" => ";
                ans = i;
                break;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
// Alhamdulillah