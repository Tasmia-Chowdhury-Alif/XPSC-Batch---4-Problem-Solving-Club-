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
        int x1 , y1 , x2 , y2;
        cin >> x1 >> y1 >> x2 >> y2 ;
        
        int mn_dif ;
        int mx_dif ;
        int mn_h , mx_h ;

        if(x1 < y1)
        {
            // cout <<"x"<<endl;
            mn_dif = x2 - x1 ;
            mx_dif = y2 - y1 ;
            mn_h = x2 ;
            mx_h = y2 ;
        }
        else
        {
            // cout <<"y"<<endl;
            mn_dif = y2 - y1 ;
            mx_dif = x2 - x1 ;
            mn_h = y2 ;
            mx_h = x2 ;
        }

        
        // cout<<mn_dif<<" "<<mx_dif<<endl;

        if(mn_dif > mx_dif and mn_h > mx_h)
        {
            cout<<"NO";
        }
        else // if(mn_dif <= mx_dif)
        {
            cout<<"YES";
        }
        cout<<endl;
        
    }
    // 1,755,647

    return 0;
}
// Alhamdulillah