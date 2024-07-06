// Bismillah
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n , a , b;
    cin >> n >> a >> b ;

    int l = 1 , r = min(a , b) , mid , ans = 1;
    while (l<=r)
    {
        mid = (l+r)/2 ;
        if((a/mid)+(b/mid) >= n)
        {
            // cout<<(a/mid) << (a/mid)+(b/mid)<<endl;
            ans = mid ;
            l = mid + 1 ;
        }
        else r = mid - 1 ;
    }
    
    cout<<ans;

    return 0;
}
// Alhamdulillah