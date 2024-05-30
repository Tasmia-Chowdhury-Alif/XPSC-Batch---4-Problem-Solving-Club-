// Bismillah
#include <bits/stdc++.h>
#define ll long long int
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

        vector<char> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<char> ans;

        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == '0')
            {
                int x = (a[i - 1] - '0');
                int y = (a[i - 2] - '0') * 10;
                char c = 'a' + x + y - 1;
                ans.push_back(c);
                i -= 2;
            }
            else
            {
                char c = 'a' + (a[i] - '0') - 1;
                ans.push_back(c);
            }
        }

        reverse(ans.begin(), ans.end());
        
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}
// Alhamdulillah