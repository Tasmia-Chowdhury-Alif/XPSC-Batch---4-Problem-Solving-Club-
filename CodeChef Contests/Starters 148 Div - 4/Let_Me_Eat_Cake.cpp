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
        float a, b;
        cin >> a >> b;

        int ans = 0;
        while (a != b)
        {
            if (a > b)
            {
                ans += ceil(a / 2);
                a -= ceil(a / 2);
            }
            else
            {
                ans += ceil(b / 2);
                b -= ceil(b / 2);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
// Alhamdulillah