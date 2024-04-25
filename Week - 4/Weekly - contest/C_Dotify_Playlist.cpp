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
        int n, k, l;
        cin >> n >> k >> l;

        priority_queue<int> song;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            if (y == l)
            {
                song.push(x);
            }
        }

        int ans = 0;
        bool flag = false ;
        for (int i = 0; i < k; i++)
        {
            if (!song.empty())
            {
                ans += song.top();
                song.pop();
            }
            else
            {
                flag = true ;
                break;
            }
        }

        if (flag)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }

    return 0;
}