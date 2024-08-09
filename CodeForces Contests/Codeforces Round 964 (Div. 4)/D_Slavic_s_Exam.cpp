// Bismillah
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        string s, t;
        cin >> s;
        cin >> t;

        int n = s.size();
        int m = t.size();

        int diff = 0 , step = 0 ;

        int i = 0 , j = 0 ;
        while (i<n)
        {
            if(s[i] == '?')
            {
                step++;
            }

            if(j<m and s[i] != t[j])
            {
                
            }
            j++;
            i++;
        }
        
    }
    return 0;
}
// Alhamdulillah