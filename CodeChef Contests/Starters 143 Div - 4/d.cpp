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
        int n;
        cin >> n;

        vector<int> a(n);
        a[0] = n - 1;
        for (int i = 1; i < n - 1; i++)
        {
            a[i] = n - i - 1;
        }
        a[n-1] = 1;
        if(n == 1)
        {
            cout<<1<<endl<<1<<endl;
            continue;
        }
        cout << n - 1 << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// Alhamdulillah