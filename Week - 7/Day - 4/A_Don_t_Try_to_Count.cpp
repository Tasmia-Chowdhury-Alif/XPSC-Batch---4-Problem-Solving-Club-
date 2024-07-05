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

        string x , s ;
        cin >> x ;
        cin >> s ;
        
        int op = 0 ;
        bool flag = false ;

        if(x == s)
        {
            flag = true ;
        }

        int l = 0 , r = m-1 ;
        while (r < x.size())
        {
            string tp ;
            for (int i = l; i <= r; i++)
            {
                tp += x[i];
            }

            if(tp == s)
            {
                flag = true ;
                break;
            }
            l++;
            r++;
        }

        while(!flag and op <= 5)
        {
            // if( n < m)
            // {
            //     if( op > m+n+1) // *3 could needed
            //     {
            //         break;
            //     }
            // }
            // else
            // {
            //     if( op > 2) // *3 could needed
            //     {
            //         break;
            //     }
            // }
            x += x ;
            op++;

            l = 0 , r = m-1 ;
            while (r < x.size() )
            {
                string tmp ;
                for (int i = l; i <= r; i++)
                {
                    tmp += x[i];
                }

                if(tmp == s)
                {
                    flag = true ;
                    break;
                }
                l++;
                r++;
            }
            
        }

        
        // k kk kkkk kkkkkkkk kkkkkkkkkkkkkkkk kkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkk

        if(flag)
        {
            cout<<op<<endl;
        }
        else 
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}
// Alhamdulillah