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
        map<int, vector<int>> cnt;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (cnt[a[i]].size() < 3)
                cnt[a[i]].push_back(i);
        }

        int x, y;
        bool flag = false;
        for (auto [q, r] : cnt)
        {
            if (q > 1 and cnt[q].size() == 2)
            {
                x = r[0];
                y = r[1];
                flag = true;
                break;
            }
            // else if(q %2 = 0 and )
        }
        if(!flag)
        {
            for (int i = 0; i < n; i++)
            {
                if(a[i] != 2 and a[i+1] != 3)
                {

                }
                if(a[i] != 1 and a[i+1] != 4)
                {

                }
                if(a[i] != 1 and a[i+1] != 4)
                {

                }
            }
        }

        if (flag)
            cout << x << " " << y << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
// Alhamdulillah