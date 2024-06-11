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

        string s;
        cin >> s;

        bool flag = true;
        char x = s[0];

        if ((x < 'a' or x > 'z') and (x < '0' or x > '9'))
        {
            flag = false;
        }

        for (int i = 1; i < n; i++)
        {
            // first condition
            if ((s[i] < 'a' or s[i] > 'z') and (s[i] < '0' or s[i] > '9'))
            {
                flag = false;
                break;
            }

            // 2nd
            if ((x >= 'a' and x <= 'z') and (s[i] >= '0' and s[i] <= '9'))
            {
                flag = false;
                break;
            }

            // 3rd
            if ((s[i] >= '0' and s[i] <= '9') and (x >= '0' and x <= '9') and (s[i] < x))
            {
                flag = false;
                break;
            }

            // 4th
            if ((s[i] >= 'a' or s[i] <= 'z') and (x >= 'a' and x <= 'z') and (s[i] < x))
            {
                flag = false;
                break;
            }
            // cout << s[i] << " " << x << endl;

            x = s[i];
        }

        if (flag)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}
// Alhamdulillah