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
        int move, cube;
        cin >> move >> cube;

        bool flag = true;

        if (move < cube)
        {
            flag = false;
        }

        else if (move > cube)
        {
            int cp = move - cube;
            if (cp % 2 != 0)
            {
                flag = false;
            }
        }
        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
// Alhamdulillah