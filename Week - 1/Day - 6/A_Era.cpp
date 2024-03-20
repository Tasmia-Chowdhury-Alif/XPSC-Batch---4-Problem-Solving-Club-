#include <bits/stdc++.h>
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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int i = 1, op = 0;
        for (int v : a)
        {
            if (v > i)
            {
                // cout<<v<<" "<<i<<endl;
                op += (v - i);
                i = v + 1;
            }
            else
            {
                i++;
            }
        }
        cout << op << endl;
    }

    return 0;
}