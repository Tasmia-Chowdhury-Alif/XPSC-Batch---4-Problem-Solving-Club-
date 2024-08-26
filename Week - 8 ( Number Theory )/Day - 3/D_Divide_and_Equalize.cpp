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

        map<int, int> factor;
        for (int i = 0; i < n; i++)
        {
            for (int j = 2; j * j <= a[i]; j++)
            {
                while (a[i] % j == 0)
                {
                    factor[j]++;
                    a[i] /= j;
                }
            }
            if (a[i] > 1)
            {
                factor[a[i]]++;
            }
        }

        bool flag = true;
        for (auto [x, y] : factor)
        {
            if (y % n != 0)
            {
                flag = false;
                break;
            }
            // cout << x << " -> " << y << endl;
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