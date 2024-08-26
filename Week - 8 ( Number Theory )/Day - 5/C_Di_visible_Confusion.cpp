// Bismillah
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            bool dv = false;
            for (int j = 2; j <= i + 2; j++)
            {
                if (a[i] % j != 0)
                {
                    // cout << a[i] << " " << j << endl;
                    dv = true;
                    break;
                }
            }
            if (!dv)
            {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
// Alhamdulillah