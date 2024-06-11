#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n , k , x ;
        cin>>n>>k>>x;
        if(x >= pow(2, k-1))
        {
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
    // 1 2 3 4  5 6
    // 1 2 4 8 16 32
    // the equeation shuld be 2^(k-1) [here k = index]

    return 0;
}