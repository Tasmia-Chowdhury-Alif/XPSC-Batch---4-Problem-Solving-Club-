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
        ll x , y , k;
        cin >> x >> y >> k;

        while (k > 0)
        {
            while (x % y == 0)
            {
                x = x / y ;
            }
            
            x += k ;
            if(x % y != 0 and x > y)
            {
                x -= ceil(x % y) ;
                k = ceil(x % y) ;
            }
            else 
            {
                k = 0 ; 
            }
        }

        cout<< x <<endl;
    }

    return 0;
}
// Alhamdulillah