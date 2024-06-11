// Bismillah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int ans = n * (n + 1) / 2;

    unordered_map<int, int> same;
    same[0] = 1;

    int z = 0, o = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            z++;
        }
        else
            o++;

        if (same.find(z - o) != same.end())
        {
            ans += same[z - o];
            same[z - o]++;
            continue;
        }
        same[z - o] = 1;
    }
    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t = 1 ;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
// Alhamdulillah