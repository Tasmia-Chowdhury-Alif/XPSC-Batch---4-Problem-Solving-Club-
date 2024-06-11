#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r;
        cin >> n >> l >> r;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int mn = 0, mx = 0, hp = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= l && a[i] <= r)
            {
                hp++;
                mx = max(mx, hp);
            }
            else
            {
                hp--;
                mn = min(mn, hp);
            }
        }
        cout << mx << " " << mn << "\n";
    }

    return 0;
}