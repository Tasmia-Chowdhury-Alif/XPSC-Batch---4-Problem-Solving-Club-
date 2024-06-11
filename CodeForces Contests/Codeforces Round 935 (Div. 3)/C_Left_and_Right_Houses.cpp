#include <bits/stdc++.h>
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
        string s;
        cin >> s;

        vector<int> pref(n + 1), suff(n + 2);
        for (int i = 1; i <= n; i++)
        {
            pref[i] = pref[i - 1] + (s[i - 1] - '0');
        }
        for (int i = n; i >= 1; i--)
        {
            suff[i] = suff[i + 1] + (s[i - 1] - '0');
        }

        // for (int i = 1; i <= n; i++)
        // {
        //     cout<<pref[i]<<" ";
        // }
        // cout<<endl;
        // for (int i = 1; i <= n; i++)
        // {
        //     cout<<suff[i]<<" ";
        // }
        // cout<<endl;
        // cout<<endl;

        double mid = (n / 2.0), diff_n, mn = INT_MAX;
        int ans;

        for (int i = 1; i <= n; i++)
        {
            int zero = i - pref[i];
            int one = suff[i + 1]; // right side starts from i+1

            int leftHouse = ceil((i * 1.0) / 2);
            int rightHouse = ceil((n - i) * 1.0 / 2);

            if (zero >= leftHouse && one >= rightHouse)
            {
                diff_n = abs(mid - i);
                if (diff_n < mn)
                {
                    mn = diff_n;
                    ans = i;
                }
            }
        }

        int total_one = pref[n] , half = ceil(n*1.0 / 2) ;

        if((mid - 0) <= mn && total_one >= half)
        {
            ans = 0 ;
        }
        cout << ans << endl;
    }

    return 0;
}