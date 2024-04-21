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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll sum = 0, opr = 0;
        bool neg = false;

        for (int i = 0; i <= n; i++)
        {
            if (i < n)
                sum += abs(a[i]);

            if (neg)
            {
                if (i == n or a[i] > 0) // if it's a Positive number
                {
                    opr++;
                    neg = false;
                }
            }
            else
            {
                if (a[i] < 0)
                {
                    neg = true;
                }
            }
        }

        cout << sum << " " << opr << endl;
    }

    return 0;
}