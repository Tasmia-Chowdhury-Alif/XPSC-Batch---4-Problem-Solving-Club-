// Bismillah
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int mx = INT_MIN, mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            mx = max(mx, a[i]);
            mn = min(mn, a[i]);
        }

        if (mx == mn)
        {
            cout << -1 << endl;
            continue;
        }

        vector<int> b;
        vector<int> c;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == mx)
            {
                c.push_back(a[i]);
            }
            else
                b.push_back(a[i]);
        }
        cout << b.size() << " " << c.size() << "\n";

        for (int x : b)
        {
            cout << x << " ";
        }
        cout << "\n";

        for (int x : c)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}
// Alhamdulillah