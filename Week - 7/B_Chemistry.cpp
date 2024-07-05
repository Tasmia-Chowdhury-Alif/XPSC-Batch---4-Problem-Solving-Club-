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

        map<char,int> mp ;
        string s;
        cin>>s;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        
        // cout<<s << " , " << k <<" => ";
        // sort(s.begin(), s.end());
        // cout<<s<<endl;

        int even = 0 , odd = 0 ;
        for(auto [x,y] : mp)
        {
            if(y % 2 != 0)
            {
                odd++;
            }
        }

        bool flag = true ;
        if(odd > k+1)
        {
            flag = false ;
        }
        // else if(odd < k)
        // {

        //     if(k % 2 != 0 )
        // }

        if(flag)
            cout<<"YES";
        else 
            cout<<"NO";

        cout<<endl;
    }
    return 0;
}
// Alhamdulillah