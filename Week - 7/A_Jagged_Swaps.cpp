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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        // for (int i = 1; i < n-1; i++)
        // {
        //     if(a[i-1] < a[i] and a[i] > a[i+1])
        //     {
        //         swap(a[i],a[i+1]);
        //     }
        // }

        // bool flag = true ;
        // for (int i = 0; i < n; i++)
        // {
        //     if(a[i] != i+1)
        //     {
        //         flag = false ;
        //         break;
        //     }
        // }
        if(a[0] == 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
// Alhamdulillah