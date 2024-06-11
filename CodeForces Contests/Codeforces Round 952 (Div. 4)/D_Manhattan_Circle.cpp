// Bismillah
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        char a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }

        float mx = 0, r = 0 , c = 0;
        for (int i = 0; i < n; i++)
        {
            float tmp = 0;
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == '#')
                {
                    tmp++;
                }
                else
                {
                    if (mx < tmp)
                    {
                        mx = tmp;
                        r = i;
                        c = ceil(mx / 2)+1;
                    }
                    tmp = 0;
                }
            }
            if (mx < tmp)
            {
                mx = tmp;
                r = i;
            }
        }

        cout << r+1 << " " << (mx / 2)+1 << endl;
    }
    return 0;
}
// Alhamdulillah