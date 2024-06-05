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
        vector<int> p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }

        vector<bool> hit(n , false);

        for (int i = 0; i < n; i++)
        {
            hit[i] = true;
            int left = a[i+1] - a[i] ;
            int right = a[i] - a[i-1] ;
            
        }
        
    }
    return 0;
}
// Alhamdulillah