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
        int n, s, m;
        cin >> n >> s >> m;

        vector<pair<int, int> > a(n);
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;

            a[i] = { x,y };
        }

        int mx = 0, cur = 0;
        for (int i = 0; i < n; i++)
        {
            mx = max(mx, a[i].first - cur);
            cur = a[i].second ;
        }

        if (cur < m)
        {
            mx = max(mx, m - cur);
        }
        // cout<<mx<<endl;

        if (mx >= s)
        {
            cout << "YES";
        }
        else cout << "NO";
        cout << "\n";

    }
    return 0;
}
// Alhamdulillah