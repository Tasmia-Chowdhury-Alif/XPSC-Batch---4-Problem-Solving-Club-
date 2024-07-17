// Bismillah
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        int lose = 0, win = 0;
        for (int i = 0; i < n - x; i++)
        {
            lose += pow(2, i + 1);
        }

        for (int i = n - x ; i < n; i++)
        {
            win += pow(2, i + 1);
        }

        // cout << n-x << endl;
        // cout << win << " " << lose << endl;
        cout << win - lose << endl;
    }
    return 0;
}
// Alhamdulillah