
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
        sort(a.begin(), a.end());

        ll sum = a[0];

        for (int i = 1; i < n; i++)
        {
            if (a[i] == 1 or sum == 1)
            {
                sum += a[i];
                cout << " + " << sum;
            }
            else
            {
                sum *= a[i];
                cout << " X " << sum;
            }
            sum %= 1000000007;
        }

        cout << " = " << sum << endl;
    }

    return 0;
}