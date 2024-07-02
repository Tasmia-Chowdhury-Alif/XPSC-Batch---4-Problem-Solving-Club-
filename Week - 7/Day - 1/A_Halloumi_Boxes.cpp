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
        int n , k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        if(k>1)
        {
            cout<<"YES";
        }
        else
        {
            bool flag = true ;
            for (int i = 0; i < n-1 ; i++)
            {
                if(a[i] > a[i+1])
                {
                    flag = false ;
                }
            }
            if(flag)
            {
                cout<<"YES";
            }
            else cout<<"NO";
        }
        cout<<endl;

    }
    return 0;
}
// Alhamdulillah