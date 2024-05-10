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
        int a, b;
        cin >> a >> b;

        ll x = min(a, b);
        ll sum = (a ^ x) + (b ^ x);
        cout << sum << endl;
    }
    return 0;
}
// Alhamdulillah