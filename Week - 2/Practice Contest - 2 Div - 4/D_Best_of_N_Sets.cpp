#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int y, x;
        cin >> x >> y;

        int mx = max(x, y);
        cout << (mx * 2) - 1 << endl;
    }

    return 0;
}