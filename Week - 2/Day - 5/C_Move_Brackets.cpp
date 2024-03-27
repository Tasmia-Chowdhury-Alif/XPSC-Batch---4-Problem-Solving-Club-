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
        string s;
        cin >> s;
        int i = 0, cnt = 0;
        while (i < n)
        {
            if (s[i] == '(')
            {
                cnt++;
            }
            else if (s[i] == ')' && cnt > 0)
                cnt--;

            i++;
        }
        cout << cnt << endl;
    }

    return 0;
}