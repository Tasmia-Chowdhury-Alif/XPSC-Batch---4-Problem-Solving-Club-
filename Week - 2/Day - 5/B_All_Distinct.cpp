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
        map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            freq[a[i]]++;
        }

        int to_be_delete = 0;
        for (auto x : freq)
        {
            to_be_delete += x.second - 1;
        }
        int ans = n - to_be_delete;
        if (to_be_delete % 2 != 0)
        {
            ans--;
        }
        cout<<ans<<endl;
    }

    return 0;
}