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

        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << endl;

        vector<int> a(n);
        if (n % 2 != 0 and n > 1)
        {
            for (int i = 0; i < n; i++)
            {
                if (i == (n / 2))
                {
                    // cout << i << " => ";
                    for (int j = i; j > 0; j--)
                    {
                        a[i] = j;
                        i++;
                        // cout << i+1 << " - " << j << endl;
                    }
                    a[i] = (n / 2) + 1;
                    break;
                }
                else
                {
                    a[i] = n - i;
                }
            }
            if (n > 3)
                swap(a[n - 1], a[n - 2]);

            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
        else
        {
            for (int i = n; i > 0; i--)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
// Alhamdulillah

// 1 2 3 4 5 6 7
// 7 6 5 3 2 1 4
// 6 4 2 1 3 5 3

// 7 6 5 3 4 2 1
// 6 4 2 1 1 4 6

// 7 6 5 4 3 2 1
// 6 4 2 0 2 4 6