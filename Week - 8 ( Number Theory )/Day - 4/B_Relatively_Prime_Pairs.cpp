// Bismillah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll l, r;
    cin >> l >> r;

    if ((r - l + 1) % 2 != 0)
    {
        cout << "NO\n";
    }
    else
    {
        // vector<pair<int, int>> pr;
        cout << "YES\n";

        for (ll i = l; i <= r; i += 2)
        {
            // pr.push_back({i,i+1});
            cout << i << " " << i + 1 << "\n";
            // cout << " " << __gcd(i, i + 1) << endl;
        }
    }
    return 0;
}
// Alhamdulillah