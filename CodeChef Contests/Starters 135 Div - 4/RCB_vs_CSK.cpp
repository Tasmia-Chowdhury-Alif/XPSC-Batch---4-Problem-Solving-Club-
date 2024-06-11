// Bismillah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;

    bool flag = false;
    if (x > y and (x - y) >= 18)
    {
        flag = true;
    }

    if (flag)
    {
        cout << "RCB";
    }
    else
        cout << "CSK";
    return 0;
}
// Alhamdulillah