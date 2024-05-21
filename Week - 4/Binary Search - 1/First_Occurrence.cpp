// Bismillah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n, key;
    cin >> n >> key;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0, r = n - 1, idx = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == key)
        {
            idx = mid;
            r = mid-1;
        }
        else if (a[mid] > key)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << idx << " :- " << a[idx];

    return 0;
}
// Alhamdulillah