#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, s;
    cin >> n >> s;
    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll sum = 0, ans = INT_MAX, l = 0, r = 0;

    while (r < n)
    {
        sum += a[r];
        while (sum >= s)
        {
            ans = min(ans, (r - l + 1));
            sum -= a[l];
            l++;
        }
        r++;
    }

    if (ans == INT_MAX) {
        ans = -1;
    }

    cout << ans;

    return 0;
}
