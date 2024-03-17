#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, c;
    cin >> a >> b >> c;

    for (int i = a; i <= b ; i++)
    {
        if(i%c == 0)
        {
            cout<<i;
            return 0 ;
        }
    }
    cout<<-1 ;


    // int i = 2;

    // while (true)
    // {
    //     int mlt = c * i;
    //     if (mlt >= a && mlt <= b)
    //     {
    //         cout << mlt;
    //         break;
    //     }
    //     if (mlt < a)
    //     {
    //         i++;
    //     }
    //     else if (mlt > b)
    //     {
    //         cout << -1;
    //         break;
    //     }
    // }
    
    return 0;
}