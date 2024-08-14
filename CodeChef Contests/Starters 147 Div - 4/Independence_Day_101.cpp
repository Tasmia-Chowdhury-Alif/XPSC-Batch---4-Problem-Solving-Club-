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
        vector<int> a(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        a[2] -= a[0] *2;
        a[2] -= (a[1] - a[0]);

        // for (int i = 0; i < 3; i++)
        // {
        //     cout<< a[i]<< " ";
        // }

        if (a[2] > 1)
        {
            cout << "NO";
        }
        else
            cout << "YES";
        cout << endl;
    }
    return 0;
}
// Alhamdulillah