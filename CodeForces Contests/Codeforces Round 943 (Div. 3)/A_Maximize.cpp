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

        int mx = INT_MIN;
        int ans = 0;
        for (int i = 1; i < n; i++)
        {
            int gcd = __gcd(n, i);
            if (mx < gcd + i)
            {
                ans = i;
                mx = gcd + i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
// Alhamdulillah