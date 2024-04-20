#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;

        map<int, vector<int>> mp;

        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            mp[x].push_back(i);
        }

        while (q--)
        {
            int u, v;
            cin >> u >> v;

            bool flag;

            if (mp[u].empty() or mp[v].empty())
            {
                flag = false;
            }
            else if (u == v)
            {
                flag = true;
            }
            else if (mp[u].front() < mp[v].back())
            {
                flag = true;
            }
            else
                flag = false;

            if (flag)
                cout << "YES";
            else
                cout << "NO";
            cout << endl;
        }
    }

    return 0;
}