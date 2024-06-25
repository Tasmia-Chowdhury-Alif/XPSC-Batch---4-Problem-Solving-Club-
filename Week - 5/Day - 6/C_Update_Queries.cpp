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
        int n , m;
        cin >> n >> m;

        string s , c ;
        cin>>s;

        set<int> st;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            st.insert(x-1) ;
        }
        
        cin>>c;

        // set are always sorted deafult . so no need to sort a set .
        // sort(st.begin(),st.end());
        sort(c.begin(),c.end());

        int j = 0 ;
        for (auto x : st)
        {
            s[x] = c[j];
            j++;
        }

        cout<<s<<endl;
    }
    return 0;
}
// Alhamdulillah