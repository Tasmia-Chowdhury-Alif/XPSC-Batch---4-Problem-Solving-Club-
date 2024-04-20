#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;

        int xa = 0, xb = 0;
        if (a[a.size() - 1] == 'L' or 'S')
        {
            xa = a.size() - 1;
        }
        if (b[b.size() - 1] == 'L' or 'S')
        {
            xb = b.size() - 1;
        }

        char ans;
        if (a == b)
        {
            ans = '=';
        }
        else if (a[a.size() - 1] == 'L' and b[b.size() - 1] == 'L')
        {
            if (xa > xb)
            {
                ans = '>';
            }
            else
                ans = '<';
        }
        else if(a[a.size() - 1] == 'S' and b[b.size() - 1] == 'S')
        {
            if (xa > xb)
            {
                ans = '<';
            }
            else
                ans = '>';
        }
        else if(a[a.size() - 1] == 'S' and b[b.size() - 1] == 'M' or a[a.size() - 1] == 'S' and b[b.size() - 1] == 'L')
        {
            ans = '<' ;
        }
        else if(a[a.size() - 1] == 'M' and b[b.size() - 1] == 'S' or a[a.size() - 1] == 'L' and b[b.size() - 1] == 'S')
        {
            ans = '>' ;
        }

        else if(a[a.size() - 1] == 'M' and b[b.size() - 1] == 'L' or a[a.size() - 1] == 'S' and b[b.size() - 1] == 'L')
        {
            ans = '<' ;
        }
        else if(a[a.size() - 1] == 'L' and b[b.size() - 1] == 'S' or a[a.size() - 1] == 'L' and b[b.size() - 1] == 'M')
        {
            ans = '>' ;
        }

        cout<<ans<<endl;
    }

    return 0;
}