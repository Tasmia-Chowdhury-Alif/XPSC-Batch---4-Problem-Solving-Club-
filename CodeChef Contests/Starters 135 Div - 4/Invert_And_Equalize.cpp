// Bismillah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<char> a(n);
        cin >> a[0];
        char x = a[0];
        int zero = 0, one = 0;

        for (int i = 1; i < n; i++)
        {
            cin >> a[i];
            if (a[i] != x)
            {
                if (x == '0')
                {
                    zero++;
                    // cout << x << " " << a[i] << " => " << zero << " ";
                }
                else
                {
                    one++;
                    // cout << x << " " << a[i] << " => " << one << " ";
                }
                x = a[i];
            }
        }
        if (n > 1)
        {
            if (x == '0')
            {
                zero++;
            }
            else
            {
                one++;
            }
        }

        cout << zero << " " << one << " => ";
        cout << min(zero, one) << endl;
    }

    return 0;
}
// Alhamdulillah