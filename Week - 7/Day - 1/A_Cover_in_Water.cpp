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

        string s;
        cin>>s;

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i] == '.')
            {
                int cnt = 0 ;
                while (s[i] == '.')
                {
                    i++;
                    cnt++;
                }
                if(cnt>2)
                {
                    ans = 2 ;
                    break;
                }
                else if(cnt == 2) ans += 2 ;
                else ans++;
                
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
// Alhamdulillah