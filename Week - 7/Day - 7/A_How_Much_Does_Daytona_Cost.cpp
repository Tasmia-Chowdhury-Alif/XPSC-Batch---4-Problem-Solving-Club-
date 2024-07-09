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
        
        bool flag = false ;
        for (int i = 0; i < n; i++)
        {
            if(a[i] == k)
            {
                int j = i+1 , ck = 1 , cmx = 0;
                map <int,int> mp ;
                while (a[j] != k and j<n)
                {
                    mp[a[j]]++;
                    cmx = max(cmx , mp[a[j]]);
                    j++;
                }
                if(ck == 1 or ck > cmx)
                {
                    flag = true ;
                    break;
                }
            }
        }

        if(flag )
        cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}
// Alhamdulillah