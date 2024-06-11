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
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        stack<int> value;
        stack<int> index;

        for (int i = 0; i < n; i++)
        {
            while (value.size() > 1 and value.top() > a[i])
            {
                int cur = value.top();
                value.pop();

                if (cur >= value.top())
                {
                    index.pop();
                }
                else
                {
                    value.push(cur);
                }
            }

            value.push(a[i]);
            index.push(i);
        }

        int last_item = value.top();
        value.pop();
        int last_index = index.top();
        index.pop();

        int cur_val = value.top();
        value.pop();
        int cur_index = index.top();
        index.pop();

        ll ans = 0;

        while (!value.empty())
        {
            ans += abs(cur_index - index.top()) * max(cur_val, value.top());

            cur_val = value.top();
            value.pop();
            cur_index = index.top();
            index.pop();
        }

        cout << ans << endl;
    }
    return 0;
}
// Alhamdulillah