#include <bits/stdc++.h>
using namespace std;

void solve(int n, string &s)
{
    vector<int> cnt(4);
    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] == '0' && s[i] == '0')
            cnt[0]++;
        else if (s[i - 1] == '0' && s[i] == '1')
            cnt[1]++;
        else if (s[i - 1] == '1' && s[i] == '0')
            cnt[2]++;
        else
            cnt[3]++;
    }
    cout << cnt[0] + cnt[3] + min(cnt[1], cnt[2]) + 1 << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, n;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> n >> s;
        solve(n, s);
    }
    return 0;
}
