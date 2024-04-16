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
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        priority_queue<ll> bonus;
        ll ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                bonus.push(a[i]);
            }
            else if (a[i] == 0 && !bonus.empty())
            {
                ans += bonus.top();
                bonus.pop();
            }
        }

        cout << ans << endl;
    }

    return 0;
}