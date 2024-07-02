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
        int a , b , kx , ky , qx , qy;
        cin >> a >> b >> kx >> ky >> qx >> qy ;

        vector<int> atx = {a , a , -a , -a , b , -b , -b , b} ; 
        vector<int> aty = {b , -b , -b , b , a , a , -a , -a } ; 

        // vector<pair<ll,ll>> k_att , q_att ;
        set<pair<ll,ll>> k_att , q_att ;

        // for (int i = 0; i < 8 ; i++)
        // {
        //     k_att.push_back({ atx[i] + kx , aty[i] + ky });
        //     q_att.push_back({ atx[i] + qx , aty[i] + qy });
        // } 
        for (int i = 0; i < 8 ; i++)
        {
            k_att.insert({ atx[i] + kx , aty[i] + ky });
            q_att.insert({ atx[i] + qx , aty[i] + qy });
        } 

        int cnt = 0 ;

        // for (auto att : k_att)
        // {
        //     if( find(q_att.begin() , q_att.end() , att) != q_att.end() )
        //     {
        //         cnt++;
        //     }
        // }
        for (auto att : k_att)
        {
            if( q_att.find(att) != q_att.end() )
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
// Alhamdulillah