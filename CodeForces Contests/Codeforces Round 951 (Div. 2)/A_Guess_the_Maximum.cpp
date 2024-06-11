#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define vl vector<int>
#define pi pair<ll, ll>
#define mp map<ll, ll>
#define st set<int>
#define pq priority_queue<ll>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n;
        vl a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            cout << ans << " => ";
            ans = min(ans, max(a[i], a[i + 1]));
            cout << ans << endl;
        }
        cout << ans - 1 << endl;
    }
    return 0;
}








// // Bismillah
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;

//         int mn = INT_MAX, mx = INT_MIN;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             mn = min(mn, a[i]);
//             mx = max(mx, a[i]);
//         }
//         sort(a.begin(), a.end());

//         int ans;

//         if (mn == mx)
//         {
//             cout << mn - 1 << endl;
//             continue;
//         }

//         // int l = 0, r = n - 1;
//         // bool idx = false;
//         // while (l <= r)
//         // {
//         //     int mid = (l + r) / 2;
//         //     if (a[mid] == a[1]-1)
//         //     {
//         //         idx = true;
//         //         break;
//         //     }
//         //     else if (a[mid] > a[1]-1)
//         //     {
//         //         r = mid - 1;
//         //     }
//         //     else
//         //     {
//         //         l = mid + 1;
//         //     }
//         // }

//         ans = a[1] - 1;
//         cout << ans << endl;
//     }
//     return 0;
// }
// // Alhamdulillah