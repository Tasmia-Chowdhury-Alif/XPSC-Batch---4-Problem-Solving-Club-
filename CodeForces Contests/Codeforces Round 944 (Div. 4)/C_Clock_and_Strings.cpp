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
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int t1 = min(a, b), t2 = max(a, b);
        a = t1, b = t2;
        t1 = min(c, d), t2 = max(c, d);
        c = t1, d = t2;

        vector<int> v1, v2;
        bool freq[13] = {false};
        for (int i = a; i <= b; i++)
        {
            v1.push_back(i);
            freq[i] = true ;
        }
        for (int i = 1; i <= 12; i++)
        {
            if(!freq[i])
            {
                v2.push_back(i);
            }
        }
        // for (int i = 1; i <= 12; i++)
        // {
        //     if (i >= a and i <= b)
        //     {
        //         v1.push_back(i);
        //     }
        //     else
        //     {
        //         v2.push_back(i);
        //     }
        // }
        bool f1 = false;
        bool f2 = false;

        vector<int>::iterator it1 = find(v1.begin(), v1.end(), c);
        vector<int>::iterator it2 = find(v2.begin(), v2.end(), d);

        if (it1 != v1.end())
        {
            f1 = true;
        }
        if (it2 != v2.end())
        {
            f2 = true;
        }
        it1 = find(v1.begin(), v1.end(), d);
        it2 = find(v2.begin(), v2.end(), c);

        if (it1 != v1.end())
        {
            f1 = true;
        }
        if (it2 != v2.end())
        {
            f2 = true;
        }

        if (f1 and f2)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
        // for (int x : v1)
        // {
        //     cout << x << " ";
        // }
        // cout << endl;
        // for (int x : v2)
        // {
        //     cout << x << " ";
        // }
        // cout << endl<<endl;
    }
    return 0;
}
// Alhamdulillah