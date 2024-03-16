#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    int ans = b - a;
    if (ans > 0)
    {
        cout << ans + 1;
    }
    else
        cout << 0;
    return 0;
}