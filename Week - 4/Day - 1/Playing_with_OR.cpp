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
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int l = 0, r = 0, odd = 0, ans = 0;
        while (r < n)
        {
            if (a[r] % 2 != 0)
            {
                odd++;
            }

            if ((r - l) + 1 == k)
            {
                if (odd > 0)
                {
                    ans++;
                }
                if (a[l] % 2 != 0)
                {
                    odd--;
                }
                l++;
            }
            r++;
        }

        cout << ans << endl;
    }
    return 0;
}
// Alhamdulillah