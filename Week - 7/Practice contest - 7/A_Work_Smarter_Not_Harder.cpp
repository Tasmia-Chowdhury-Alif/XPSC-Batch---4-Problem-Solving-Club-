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
        float n, v1, v2;
        cin >> n >> v1 >> v2;
        int tort = ceil(n / v1);
        int hare = ceil(n / v2);

        if (hare + 1 < tort) // +1 for drow case
        {
            cout << tort - hare-1 << endl;
        }
        else if (hare == tort)
        {
            cout << -1 << endl;
        }
        else
            cout << 0 << endl;
    }
    return 0;
}
// Alhamdulillah