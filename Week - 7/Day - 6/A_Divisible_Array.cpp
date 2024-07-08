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
        int sum = 0 ;
        for (int i = 0; i < n; i++)
        {
            a[i] = i+1 ;
            sum += a[i] ;
        }
        
        if(sum % n != 0)
        {
            a[0] += n - (sum % n) ;
        }

        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// Alhamdulillah