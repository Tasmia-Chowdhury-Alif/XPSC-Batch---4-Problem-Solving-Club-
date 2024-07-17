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
        map<int,int> mp ;
        int mx = INT_MIN , cnt = INT_MIN ;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++ ;
            if(mp[a[i]] > cnt )
            {
                cnt = mp[a[i]] ;
                mx = a[i] ;
            }
        }
        
        int l = 0 , r = 0 , ans = 0 ;
        while (r < n)
        {
            if(a[r] == 1 and l != r)
            {
                ans += (r-l)*1 ;
                r++;
                l = r ;
            }
            else if(a[r] == 1 and l == r)
            {
                l++;
                r++;
            }
            r++;
        }

        if(ans == 0)
        {
            ans = n ;
        }

        l = 0 , r = 0 ;
        int ans2 = 0 ;
        while (r < n)
        {
            if(a[r] == mx and l != r)
            {
                ans2 += (r-l) * mx ;
                r++;
                l = r ;
            }
            else if(a[r] == 1 and l == r)
            {
                l++;
                r++;
            }
            r++;
        }
        
        cout<< ans <<" "<< ans2 <<" ";
        // cout<< mx <<" ";
        cout<<min(ans , ans2)<<endl;

    }
    return 0;
}
// Alhamdulillah