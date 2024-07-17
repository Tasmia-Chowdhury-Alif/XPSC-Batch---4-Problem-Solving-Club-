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
        int n , m;
        cin >> n >> m;

        string a , b;
        cin>> a >> b;

        // vector<bool> fa(n,false);
        

        int l = 0 , r = m-1 , ans = INT_MAX , cnt = 0 ;

        while (r < n)
        {
            int cp = l ;
            cnt = 0 ;
            for (int i = 0; i < m; i++)
            {
                if(b[i] != a[cp])
                {
                    cnt++;
                }
                cp++;
            }
            // cout<<cnt<<" , ";
            ans = min(ans , cnt ) ;
            l++ , r++ ;
        }

        // for (int i = 0; i < m; i++)
        // {
        //     if(j < n and b[i] == a[j] and !fa[j])
        //     {
        //         fa[j] = true ;
        //         ans++ ;
        //     }
        //     j++ ;
        // }

        // j = n-1 ;
        // for (int i = m-1; i >= 0; i--)
        // {
        //     if(j >= 0 and b[i] == a[j] and !fa[j])
        //     {
        //         fa[j] = true ;
        //         ans++ ;
        //     }
        //     j-- ;
        // }
        // cout<<ans<<" " ;
        cout<<ans<<endl;
    }
    return 0;
}
// Alhamdulillah