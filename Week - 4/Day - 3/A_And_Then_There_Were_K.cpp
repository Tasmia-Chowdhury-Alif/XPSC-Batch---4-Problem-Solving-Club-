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

        int ans = 1;
        while (ans <= n)
        {
            ans *= 2;
        }
        // cout << ans << " ";
        ans /= 2;
        cout << ans - 1 << endl;
    }
    return 0;
}
// Alhamdulillah