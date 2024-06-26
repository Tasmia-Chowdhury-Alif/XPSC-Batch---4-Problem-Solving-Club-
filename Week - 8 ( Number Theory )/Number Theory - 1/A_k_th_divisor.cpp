// Bismillah 
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k ;
    cin>>n>>k;

    vector<ll> a;
    for (ll i = 1; i <= sqrt(n); i++)
    {
        if(n%i == 0)
        {
            a.push_back(i);
            if(n/i != i)
            {
                a.push_back(n/i);
            }
        }
    }

    sort(a.begin(), a.end()) ;

    // for (ll i = 0; i < n; i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;

    if(k <= a.size())
        cout<<a[k-1]<<endl;
    else cout<<-1 <<endl;

    return 0;
}
// Alhamdulillah 