// Bismillah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
class Cmp
{
public:
    bool operator()(int p1, int p2)
    {
        // return "true" if "p1" is ordered before "p2", for example:
        return p1 > p2;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;

        cin >> n;
        cin >> s;

        ll ans = 0;
        char prev = '0';

        for (int i = 0; i < n; i++)
        {
            if (prev == s[i])
            {
                prev = '0';
            }
            else
            {
                ans++;
                prev = s[i];
            }
        }

        cout << ans << endl;
    }
    return 0;
}
// Alhamdulillah