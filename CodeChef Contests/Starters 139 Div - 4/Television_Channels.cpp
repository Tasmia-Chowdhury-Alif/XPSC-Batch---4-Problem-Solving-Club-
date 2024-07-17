// Bismillah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x, ans = 0;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        if (i % 2 == 0)
        {
            ans++;
        }
    }
    cout << x-ans << endl;
    return 0;
}
// Alhamdulillah