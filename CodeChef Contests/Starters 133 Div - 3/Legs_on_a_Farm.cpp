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

        int cow = 0, total = 0;

        if ((n / 4) > 0)
        {
            cow = floor(n / 4);
            total += cow;
        }

        n -= (cow * 4);
        total += (n / 2);

        cout << total << endl;
    }
    return 0;
}
// Alhamdulillah