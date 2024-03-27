#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            freq[a[i]]++;
        }

        int max_freq = INT_MIN;
        for (auto x : freq)
        {
            max_freq = max(max_freq, x.second);
        }

        int ans = 0;
        while (max_freq < n)
        {
            int remain = n - max_freq;
            int can_add = max_freq;
            ans++;
            ans += min(remain, can_add);
            max_freq += min(remain, can_add);
        }
        cout << ans << endl;
    }

    return 0;
}