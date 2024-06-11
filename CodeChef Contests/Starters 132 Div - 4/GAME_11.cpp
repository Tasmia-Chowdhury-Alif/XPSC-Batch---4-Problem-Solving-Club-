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
        int m;
        cin >> m;

        priority_queue<int> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push(x);
        }

        priority_queue<int> b;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            b.push(x);
        }

        if (n < 4 or m < 4 or (n + m) < 11)
        {
            cout << -1 << endl;
        }
        else
        {
            ll ans = 0;
            for (int i = 0; i < 4; i++)
            {
                ans += a.top();
                a.pop();
                ans += b.top();
                b.pop();
            }

            for (int i = 0; i < 3; i++)
            {
                if (!a.empty() and !b.empty())
                {
                    if (a.top() > b.top())
                    {
                        ans += a.top();
                        a.pop();
                    }
                    else
                    {
                        ans += b.top();
                        b.pop();
                    }
                }
                else if (!a.empty())
                {
                    ans += a.top();
                    a.pop();
                }
                else if (!b.empty())
                {
                    ans += b.top();
                    b.pop();
                }
            }

            cout << ans << "\n";
        }
    }
    return 0;
}
// Alhamdulillah