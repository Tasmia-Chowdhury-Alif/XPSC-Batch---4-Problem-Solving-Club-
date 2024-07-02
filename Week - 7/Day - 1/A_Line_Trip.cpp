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
        int n , x;
        cin >> n >> x;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        int tank = 0 ;
        int cur = 0 ;
        for (int i = 0; i < n; i++)
        {
            tank = max(tank , (a[i]-cur)) ;
            cur = a[i];
        }
        // cout<<x <<" "<< cur<<" ";
        tank = max(tank , 2*(x - cur)) ;

        cout<<tank<<endl;
    }
    return 0;
}
// Alhamdulillah