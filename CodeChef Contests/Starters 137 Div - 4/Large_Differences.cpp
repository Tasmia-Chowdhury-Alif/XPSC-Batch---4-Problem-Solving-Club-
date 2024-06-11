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
        int n , k;
        cin >> n >> k;

        int mn = INT_MAX ;
        int mx = INT_MIN ;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mn = min(mn , a[i]);
            mx = max(mx , a[i]);
        }
        
        // find the min and make it 0
        for (int i = 0; i < n; i++)
        {
            
        }
    }
    return 0;
}
// Alhamdulillah