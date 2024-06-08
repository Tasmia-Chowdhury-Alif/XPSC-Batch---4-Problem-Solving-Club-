// Bismillah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;
    cin >> m >> n;

    vector<tuple<int, int, int>> a(n); // the assistants
    for (int i = 0; i < n; i++)
    {
        int t, z, y;
        cin >> t >> z >> y;

        a[i] = make_tuple(t, z, y);
    }

    vector<int> assist(n, 0);
    auto ok = [&](int mid)
    {
        vector<int> tmp(n);
        int b = m;
        for (int i = 0; i < n; i++)
        {
            tuple<int, int, int> tp = a[i];
            int t = get<0>(tp);
            int z = get<1>(tp);
            int y = get<2>(tp);

            int full_seg_time = (t * z) + y;
            int full_segments = mid / full_seg_time; // number of full segments
            int partial_seg_time = (mid % full_seg_time);

            int total = (full_segments * z) + min(z, (partial_seg_time / t));
            total = min(b, total);

            b -= total; // if the time is big then total ballon will be more than the requirement . then in some cases it will give wrrong answer .
            tmp[i] = total;
        }

        if (b == 0)
        {
            for (int i = 0; i < n; i++)
            {
                assist[i] = tmp[i];
            }
            return true;
        }
        else
            return false;
    };

    // Binary Search on Answer (the time is the answer here)
    int l = 0, r = 1e7, mid, ans = 0;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans << endl;
    for (int i = 0; i < n; i++)
    {
        cout << assist[i] << " ";
    }
    cout << endl;

    return 0;
}
// Alhamdulillah