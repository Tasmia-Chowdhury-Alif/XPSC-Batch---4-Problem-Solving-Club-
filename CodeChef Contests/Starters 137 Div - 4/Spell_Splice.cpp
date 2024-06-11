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
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> v[i];
        }

        ll ans = INT_MIN;

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                ll total = ((a[i] * v[j]) + (a[j] * v[i]));
                ans = max(ans, total);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
// Alhamdulillah