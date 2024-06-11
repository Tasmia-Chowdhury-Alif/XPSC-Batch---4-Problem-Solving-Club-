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
        string s;
        cin >> s;

        int one = 0;
        for (int i = 0; i < 4; i++)
        {
            if (s[i] == '1')
            {
                one++;
            }
        }

        int ans = 0;
        if (one == 0)
        {
            ans++;
        }
        else if (one == 1)
        {
            ans = 11;
        }
        else if (one == 2)
        {
            if ((s[0] == '1' and s[1] == '1') or (s[2] == '1' and s[3] == '1'))
            {
                ans = 21;
            }
            else
            {
                ans = 121;
            }
        }
        else if (one == 3)
        {
            ans = 231;
        }
        else
        {
            ans = 441;
        }

        cout << ans << endl;
    }
    return 0;
}
// Alhamdulillah