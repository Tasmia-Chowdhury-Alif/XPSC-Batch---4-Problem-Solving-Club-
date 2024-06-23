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

        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                bool flag = true ;
                int mx = 0 ;

                // top
                if(i != 0 )
                {
                    if(a[i-1][j] < a[i][j])
                    {
                        mx = max(mx , a[i-1][j]);
                    }
                    else flag = false ;
                }

                // botom
                if(i != n-1 )
                {
                    if(a[i+1][j] < a[i][j])
                    {
                        mx = max(mx , a[i+1][j]) ;
                    }
                    else flag = false ;
                }
                
                // left
                if(j != 0 )
                {
                    if(a[i][j-1] < a[i][j])
                    {
                        mx = max(mx , a[i][j-1]) ;
                    }
                    else flag = false ;
                    
                }
                
                // right
                if(j != m-1 )
                {
                    if(a[i][j+1] < a[i][j])
                    {
                        mx = max(mx , a[i][j+1]) ;
                    }
                    else flag = false ;
                    
                }

                if(flag)
                {
                    a[i][j] = mx ;
                }

            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << a[i][j] << " ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// Alhamdulillah