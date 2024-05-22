// Bismillah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        x %= 3;
        y %= 3;

        cout << min(x, y) << endl;
    }

    return 0;
}
// Alhamdulillah