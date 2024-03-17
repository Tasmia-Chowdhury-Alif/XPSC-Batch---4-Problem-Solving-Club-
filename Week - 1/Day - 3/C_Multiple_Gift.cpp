#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll x , y ;
    cin>>x>>y ;

    ll mlt = x ;
    ll cnt = 0 ;
    while(mlt <= y)
    {
        cnt++;
        mlt = mlt * 2 ;
    }
    cout<<cnt ;
    return 0;
}