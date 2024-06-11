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
        string a;
        cin>>a;
        char x, y;
        bool flag = true;
        y = a[0];
        for (int i = 1; i < a.size(); i++)
        {
            x = a[i];
            if (x != y and flag == true)
            {
                flag = false;
                swap(a[i], a[i - 1]);
            }
        }

        if (!flag)
        {
            cout << "YES" << endl;
            for (char c : a)
            {
                cout << c;
            }
            cout << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
// Alhamdulillah