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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> freq;
        for (char c : s)
        {
            freq[c]++;
        }

        int odd = 0;
        for (auto it : freq)
        {
            if (it.second % 2 != 0)
            {
                odd++;
            }
        }
        bool flag = true;
        if (odd == 0)
        {
            flag = true;
        }
        else if ((n % 2 != 0))
        {
            if (odd == 1 or odd - k == 1 or odd <= k)
                flag = true;
        }
        else if (odd <= k)
        {
            flag = true;
        }
        else
            flag = false;


        if (flag)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}