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
        int n;
        cin >> n;

        int odd = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 != 0)
            {
                odd++;
            }
        }

        if (odd > 0)
            odd--;

        ll total = (n * (n + 1)) / 2;
        ll ans = total - odd;

        if (odd == n)
            ans = total - (n - 1);

        cout << ans << endl;
    }
    return 0;
}
// Alhamdulillah