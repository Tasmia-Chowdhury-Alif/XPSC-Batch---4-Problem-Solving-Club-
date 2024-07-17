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
        int n;
        cin >> n;

        int p = 0 ;

        while (n > pow(2,p))
        {
            if(pow(2,p) > 1e5 )
            {
                break;
            }
            p++;
        }
        
        int perfect = pow(2,p) ;

        if(n == perfect) n = 0 ;
        else n -= (perfect - n) ;

        cout<<n<<endl;
    }
    return 0;
}
// Alhamdulillah