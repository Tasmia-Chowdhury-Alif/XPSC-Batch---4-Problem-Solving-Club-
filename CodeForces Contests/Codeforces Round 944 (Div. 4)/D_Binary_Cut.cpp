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
        int cnt = 1;
        bool flag = false;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i - 1] == '1' and s[i] == '0')
            {
                cnt++;
            }
            if (s[i - 1] == '0' and s[i] == '1')
            {
                cnt++;
                flag = true;
            }
        }
        if (flag)
            cnt--;
        cout << cnt << endl;
    }
    return 0;
}
// Alhamdulillah