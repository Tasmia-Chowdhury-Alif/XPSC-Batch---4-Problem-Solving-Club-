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
        map<int,int> cnt ;
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            st.insert(a[i]);
            cnt[a[i]]++ ;
        }
        
        bool flag = true ;
        if(n == 2)
        {
            flag = true;
        }
        else if(n == 3)
        {
            if(cnt.size() == 3 )
            {
                flag = false ;
            }
        }
        else 
        {
            if(cnt.size() > 2)
            {
                flag = false ;
            }
            else if(cnt.size() == 2)
            {
                if(abs(cnt[*st.begin()] - cnt[*(--st.end())]) > 1)
                {
                    flag = false ;
                }
            }
        }

        // for(auto x : st)
        // {
        //     cout<<x<<" ";
        // }
        // cout<<endl;

        // // cout<<cnt.size()<<" ";
        // cout<< *st.begin() << " " << *st.end()<<" ";
        // cout<<abs(cnt[*st.begin()] - cnt[*st.end()])<<" ";

        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
// Alhamdulillah