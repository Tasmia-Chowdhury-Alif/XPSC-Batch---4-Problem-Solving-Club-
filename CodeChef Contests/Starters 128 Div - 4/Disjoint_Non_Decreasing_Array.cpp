#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int idx = -1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
            {
                idx = i;
                break;
            }
        }
        bool flag = true;
        if (idx != -1)
        {
            if (idx < n - 1 && a[idx + 1] < a[idx - 1] + 2)
            {
                flag = false;
            }
        }

        if (flag)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}