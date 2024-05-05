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
        // https://www.youtube.com/watch?v=D4EHQOc7rM8

        int x;
        cin >> x;

        int ans = 1, msb = 0;

        for (int i = 29; i >= 0; i--)
        {
            if (x & (1 << i))
            {
                msb++;
            }
            else if (msb >= 2)
            {
                ans *= 2;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
// Alhamdulillah