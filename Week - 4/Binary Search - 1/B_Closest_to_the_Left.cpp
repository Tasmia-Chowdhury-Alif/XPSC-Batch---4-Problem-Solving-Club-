// https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/B

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

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (k--)
    {
        int key;
        cin >> key;
        int l = 0, r = n - 1, idx = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] <= key)
            {
                idx = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << idx + 1 << endl;
    }
    return 0;
}
// Alhamdulillah