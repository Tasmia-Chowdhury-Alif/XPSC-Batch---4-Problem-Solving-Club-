// https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C

// Bismillah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (k--)
    {
        int key;
        cin >> key;
        int l = 0, r = n - 1, idx = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] >= key)
            {
                idx = mid;
                // if (a[mid] == key)
                // {
                //     break;
                // }
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (idx == -1)
            cout << n + 1 << endl;
        else
            cout << idx + 1 << endl;
    }
    return 0;
}
// Alhamdulillah