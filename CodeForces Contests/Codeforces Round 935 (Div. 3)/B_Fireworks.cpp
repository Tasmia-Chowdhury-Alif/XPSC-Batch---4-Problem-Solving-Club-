#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll a ,b , m ;
        cin>>a>>b>>m;

        ll ans = (m/a + m/b)+2 ;
        cout<<ans<<endl;
    }
    
    return 0;
}