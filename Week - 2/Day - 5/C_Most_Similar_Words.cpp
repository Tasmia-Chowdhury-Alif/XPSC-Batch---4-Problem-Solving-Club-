#include <bits/stdc++.h>
using namespace std;
int similar(string si, string sj)
{
    int n = si.size();
    int cnt = 0 ;
    for (int i = 0; i < n; i++)
    {
        cnt += abs(si[i]-sj[i]) ;
    }
    return cnt ;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<string> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        int ans = INT_MAX;
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1 ; j < n; j++)
            {
                ans = min(ans , similar(s[i],s[j]));
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}