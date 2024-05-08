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
        float n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<int>());
        // cout<<ceil(n / 2)<<" ";

        ll pos = 0;
        for (int i = 0; i < ceil(n / 2.0); i++)
        {
            pos += a[i];
        }
        ll neg = 0;
        for (int i = (ceil(n / 2.0)); i < n; i++)
        {
            neg += a[i];
        }
        // cout << pos << " " << neg << endl;
        cout << pos - neg << endl;
    }
    return 0;
}
// Alhamdulillah