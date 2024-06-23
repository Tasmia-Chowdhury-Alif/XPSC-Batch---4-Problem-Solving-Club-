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
        int x , y , z;
        cin >> x >> y >> z;

        int ans = INT_MAX ;
        for (int i = 0; i < 3; i++)
        {
            if(i == 0)
            {
                ans = min(ans , abs(x-x)+abs(x-y)+abs(x-z));
            }
            else if(i == 1)
            {
                ans = min(ans , abs(y-x)+abs(y-y)+abs(y-z));
            }
            else
            {
                ans = min(ans , abs(z-x)+abs(z-y)+abs(z-z));
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}
// Alhamdulillah