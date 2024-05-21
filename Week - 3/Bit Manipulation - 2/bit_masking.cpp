// Bismillah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

        // loop is from 1 . because there is empty SubSet
    for (int i = 1; i < (1 << n); i++) 
    {
        for (int k = 0; k < n; k++)
        {
            if ((i >> k))
            {
                cout << a[k] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
// Alhamdulillah