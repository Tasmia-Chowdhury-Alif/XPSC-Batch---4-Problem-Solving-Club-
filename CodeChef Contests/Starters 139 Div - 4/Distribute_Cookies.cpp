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
        int n, m;
        cin >> n >> m;

        ll ans;
        if (m % n == 0)
        {
            ans = 0;
        }
        else
        {
            ll des = (m % n);
            ll make = (n - (m % n));


            if (n > m and des > 0)
                des = INT_MAX;

            // cout << des << " " << make << " ";

            ans = min(des, make);
        }
        cout << ans << endl;
    }
    return 0;
}
// Alhamdulillah