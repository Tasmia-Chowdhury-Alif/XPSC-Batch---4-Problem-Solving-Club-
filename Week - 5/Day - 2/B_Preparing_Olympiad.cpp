// Bismillah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n, l, r, x;
    cin >> n >> l >> r >> x;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 0;

    // here i is Bit Mask
    for (int i = 0; i < (1 << n); i++)
    {
        int mn = INT_MAX;
        int mx = 0;
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if ((i & (1 << j)) != 0)
            {
                // cout<<1;
                sum += a[j];
                mn = min(mn, a[j]);
                mx = max(mx, a[j]);
            }
            // else cout<<0;
        }
        // for (int j = n-1 ; j >= 0; j--)
        // {
        //     cout << ((i & (1 << j)) != 0);
        // }
        // cout<<" => "<<sum<<endl;
        if (sum >= l and sum <= r)
        {
            if ((mx - mn) >= x)
            {
                ans++;
            }
        }
    }

    cout << ans;

    return 0;
}
// Alhamdulillah