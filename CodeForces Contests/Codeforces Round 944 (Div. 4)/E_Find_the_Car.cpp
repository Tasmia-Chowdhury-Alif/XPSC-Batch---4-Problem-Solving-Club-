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
        ll n, k, q;
        cin >> n >> k >> q;

        vector<ll> a(k + 1), b(k + 1);
        a[0] = 0, b[0] = 0;
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= k; i++)
        {
            cin >> b[i];
        }

        // vector<ll> time(n);
        while (q--)
        {
            ll d;
            cin >> d;

            int i = 0;
            while (i < k && a[i] >= d)
            {
                i++;
            }

            ll time = 0;
            if (i > 0)
            {
                time = a[i - 1];
            }
            time += (b[i] * d) / a[i];
            cout << time << " ";
        }
        cout << endl;
    }
    return 0;
}
// Alhamdulillah