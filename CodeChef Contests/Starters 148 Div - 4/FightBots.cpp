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
        int n, x, y;
        cin >> n >> x >> y;

        string s;
        cin >> s;

        vector<pair<int, int>> alis(n);
        int ax = 0, ay = 0;
        bool flag = false;
        for (int i = 1; i <= n; i++)
        {
            // rememer for imposibol positions
            if (s[i - 1] == 'U')
            {
                ay++;
            }
            else if (s[i - 1] == 'D')
            {
                ay--;
            }
            else if (s[i - 1] == 'L')
            {
                ax--;
            }
            else if (s[i - 1] == 'R')
            {
                ax++;
            }
            // alis[i] = {ax, ay};
            int step = abs(ax - x) + abs(ay - y);
            // cout << step << " " << step % 2 << " " << i % 2<<"\n";
            if (step == i )
            {
                flag = true;
                break;
            }
        }

        // int ans = -1;
        // for (int i = 0; i < n; i++)
        // {
        //     int cx = alis[i].first;
        //     int cy = alis[i].second;

        //     int step = abs(cx - x) + abs(cy - y);

        //     if (step <= n)
        //     {
        //         ans = step;
        //         break;
        //     }
        // }

        if (flag)
        {
            cout << "Yes";
        }
        else
            cout << "No";
        cout << "\n";
    }
    return 0;
}
// Alhamdulillah