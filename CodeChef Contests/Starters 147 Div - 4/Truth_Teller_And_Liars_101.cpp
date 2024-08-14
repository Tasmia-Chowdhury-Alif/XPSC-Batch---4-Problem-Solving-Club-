// Bismillah
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        float tr, fl;
        cin >> tr >> fl;

        if (fl >= tr)
            cout << -1 << endl;
        else
        {
            cout << fl + fl + 1 << endl;
        }
    }
    return 0;
}
// Alhamdulillah