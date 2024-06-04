// Bismillah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t = 1;
    while (true)
    {
        int n, q;
        cin >> n >> q;
        if (n == 0 and q == 0)
        {
            break;
        }

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        cout << "CASE# " << t << ":" << endl;

        while (q--)
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
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }

            if (idx != -1 and a[idx] == key)
            {
                cout << key << " found at " << idx + 1;
            }
            else
            {
                cout << key << " not found ";
            }
            cout << endl;
        }

        t++;
    }

    return 0;
}
// Alhamdulillah