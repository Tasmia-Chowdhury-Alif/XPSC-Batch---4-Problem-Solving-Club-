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

        vector<int> cnt(n+1);
        for (int i = 2; i <= n; i++)
        {
            for (int j = 2; j <= n; j++)
            {
                if (i % j == 0)
                {
                    cnt[j]++;
                }
            }
        }

        int ans, mx = INT_MIN;
        for (int i = 1; i <= n; i++)
        {
            if (cnt[i] >= mx)
            {
                mx = cnt[i];
                ans = i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
// Alhamdulillah