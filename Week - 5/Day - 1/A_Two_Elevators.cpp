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
        ll a, b, c;
        cin >> a >> b >> c;

        ll x = a - 1;
        ll y = (c - 1) + abs(c - b);

        // cout << x << " " << y << " => ";

        if (x == y)
            cout << 3;
        else if (x > y)
            cout << 2;
        else
            cout << 1;

        cout << endl;
    }

    return 0;
}
// Alhamdulillah