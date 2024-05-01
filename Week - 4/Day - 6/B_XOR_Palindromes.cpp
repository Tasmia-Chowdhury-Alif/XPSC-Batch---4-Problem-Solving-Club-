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

        string s, ans;
        cin >> s;

        int l = 0, r = n - 1, bug = 0, gdp = 0;
        while (l < r)
        {
            if (s[l] == s[r])
            {
                gdp++;
            }
            else
            {
                bug++;
            }
            l++;
            r--;
        }

        for (int i = 0; i <= n; i++)
        {
            int on = i;
            // cout << i << " ";
            on -= bug;

            if (on < 0) // start i from bug to avoid this
            {
                ans.push_back('0');
                // cout<<endl;
                continue;
            }

            // cout << on << " ";
            if (n % 2 != 0 and on > 0 and on % 2 != 0)
                on--;

            // on /= 2;
            if (on % 2 == 0)
            {
                // cout << on << " - ";
                on -= gdp * 2;
                // cout << gdp * 2 << " = " << on ;
            }

            if (on <= 0)
            {
                ans.push_back('1');
            }
            else
            {
                ans.push_back('0');
            }
            // cout<<endl;
        }

        for (char c : ans)
        {
            cout << c;
        }
        cout << endl;
    }
    return 0;
}
// Alhamdulillah