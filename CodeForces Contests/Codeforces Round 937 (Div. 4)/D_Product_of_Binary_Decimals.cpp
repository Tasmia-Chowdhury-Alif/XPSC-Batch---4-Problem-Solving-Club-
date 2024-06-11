#include <bits/stdc++.h>
using namespace std;
bool check(string s)
{
    for (char c : s)
    {
        if (c != '0' && c != '1')
        {
            return false;
        }
    }
    return true;
}
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

        if (check(s))
        {
            cout << "YES\n";
        }
        else
        {
            int num = stoi(s);
            bool flag = false;
            if ((s[0] == '0' || s[0] == '1') && (s[s.size() - 1] == '0' || s[s.size() - 1] == '1'))
            {
                if (num % 11 == 0 || num % 101 == 0)
                {
                    flag = true ;
                }
                else
                {
                    cout << "NO\n";
                }
            }



            if (flag)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}