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
        ll n, y;
        cin >> n >> y;

        ll sum = n;
        while (y--)
        {
            if (sum <= 999)
            {
                sum += 1000;
            }
            else
            {
                sum *= 2;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
// Alhamdulillah