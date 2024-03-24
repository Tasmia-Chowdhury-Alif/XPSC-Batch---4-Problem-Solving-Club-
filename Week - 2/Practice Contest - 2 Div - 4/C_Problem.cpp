#include <bits/stdc++.h>
// int dp[105][105];
using namespace std;
bool ans(int alis, int bob)
{
    if (alis == bob)
        return true;
    if (alis > bob + 3)
        return false;
    if (alis > 100 || bob > 100)
        return false;

    // if (dp[alis][bob] != -1)
    // {
    //     return dp[alis][bob];
    // }

    bool a = ans(alis - 1, bob + 1);
    bool b = ans(alis + 3, bob - 1);
    return a || b;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        // for (int i = 0; i <= n; i++)
        // {
        //     for (int j = 0; j <= x; j++)
        //     {
        //         dp[i][j] = -1;
        //     }
        // }

        if (ans(n, x))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}