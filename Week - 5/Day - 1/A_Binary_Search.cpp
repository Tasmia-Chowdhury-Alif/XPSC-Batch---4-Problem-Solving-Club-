// Bismillah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    while (k--)
    {
        int q;
        cin >> q;

        bool flag = false;
        int l = 0, r = n - 1, mid;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (a[mid] == q)
            {
                flag = true;
                break;
            }
            else if (a[mid] > q)
            {
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
// Alhamdulillah