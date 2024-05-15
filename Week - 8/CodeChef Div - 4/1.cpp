// Bismillah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // your code goes here
    int x, y;
    cin >> x >> y;
    ll ans = (2 * x) + (2 * y);
    if (ans >= 1000)
    {
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}
// Alhamdulillah