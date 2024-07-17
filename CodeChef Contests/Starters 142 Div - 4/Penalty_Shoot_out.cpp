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
        int x , y;
        cin >> x >> y ;

        if(x+2 < y or y+1 < x)
        {
            cout<< "NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
    return 0;
}
// Alhamdulillah