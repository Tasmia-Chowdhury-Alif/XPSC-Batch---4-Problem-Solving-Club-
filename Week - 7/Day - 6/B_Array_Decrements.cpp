// Bismillah
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
 
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> b(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        
        // this sorting was giving me wrong answer !!!
        
        // sort(a.begin(),a.end());
        // sort(b.begin(),b.end());
        
        ll mn_diff = INT16_MAX , mx_diff = INT16_MIN ;
 
        bool flag = true ;
        for (ll i = 0; i < n; i++)
        {
            if(a[i] < b[i])
            {
                flag = false ;
                break;
            }
 
            ll diff = a[i] - b[i] ;
            mx_diff = max(mx_diff , diff);
        }
 
        for (ll i = 0; i < n; i++)
        {
            if(a[i] - mx_diff < 0 ) a[i] = 0 ;
            else a[i] -= mx_diff ;
 
            if(a[i] != b[i])
            {
                flag = false ;
            }
        }
 
        if(flag ) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}
// Alhamdulillah

// // Bismillah
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// ll main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         cin >> n;

//         vector<ll> a(n);
//         for (ll i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         vector<ll> b(n);
//         for (ll i = 0; i < n; i++)
//         {
//             cin >> b[i];
//         }
        
//         sort(a.begin(),a.end());
//         sort(b.begin(),b.end());

//         // for (ll x : a)
//         // {
//         //     cout<<x<<" ";
//         // }
//         // cout<<endl;
//         // for (ll x : b)
//         // {
//         //     cout<<x<<" ";
//         // }
//         // cout<<endl;
        
//         ll mna = a[0] , mnb = b[0] ;
//         ll mn_diff = ll_MAX , mx_diff = ll_MIN ;

//         bool flag = true ;
//         for (ll i = 0; i < n; i++)
//         {
//             if(a[i] < b[i])
//             {
//                 flag = false ;
//                 break;
//             }

//             ll diff = a[i] - b[i] ;
//             if(b[i] > 0) mn_diff = min(mn_diff , diff);
//             mx_diff = max(mx_diff , diff);
//         }
        
//         ll z = 0;
//         while (z < n)
//         {
//             if(b[z] == 0)
//                 z++;
//             else break;
//         }

//         if((z < n-1 ) and mn_diff != mx_diff)
//         {
//             flag = false ;
//         }

//         if(flag ) cout<<"YES";
//         else cout<<"NO";
//         cout<<endl;
//     }
//     return 0;
// }
// // Alhamdulillah