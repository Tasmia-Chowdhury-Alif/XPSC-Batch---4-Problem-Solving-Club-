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
        sort(a.begin(), a.end());
        long long int op = 0;
        for (int i = 0; i < n; i++)
        {
            // op += abs(a[i] - i);
            if (a[i] > i)
            {
                op += (a[i] - i);
            }
            else if (a[i] < i)
            {
                op += (i - a[i]);
            }
        }
        cout << op << "\n";
    }

    return 0;
}