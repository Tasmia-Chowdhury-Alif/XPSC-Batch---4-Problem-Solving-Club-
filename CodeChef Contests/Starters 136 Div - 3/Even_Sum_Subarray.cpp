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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }

        if (sum % 2 == 0)
        {
            cout << n << endl;
            continue;
        }

        int l = 0, r = n - 1;
        int closest;
        while (l <= r)
        {
            if (a[l] % 2 != 0)
            {
                closest = l + 1;
                break;
            }
            else if (a[r] % 2 != 0)
            {
                closest = n - r;
                break;
            }
            l++;
            r--;
        }

        int ans = n - closest;
        cout << ans << endl;
    }
    return 0;
}
// Alhamdulillah

// // Bismillah
// #include <bits/stdc++.h>
// #define ll long long int
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

//         vector<int> a(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         int s = 0;
//         for (int i = 0; i < n; i++)
//         {
//             s += a[i];
//         }

//         if (s % 2 == 0)
//         {
//             cout << n << endl;
//             continue;
//         }

//         int ans = 0;

//         int l = 0, r = 0, sum = 0;
//         while (r < n)
//         {
//             if (a[r] % 2 == 0)
//             {
//                 sum += a[r];
//                 if (sum % 2 == 0 and r == n - 1)
//                 {
//                     ans = max(ans, (r - l) + 1);
//                 }
//             }
//             else if (a[r] % 2 != 0 and r < (n - 1) and a[r + 1] % 2 != 0)
//             {
//                 sum += a[r];
//             }
//             else
//             {
//                 if ((sum + a[r]) % 2 == 0)
//                 {
//                     sum += a[r];
//                 }
//                 else
//                 {
//                     ans = max(ans, (r - l));
//                     l = r;
//                     sum = a[l];
//                 }
//             }
//             r++;
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }
// // Alhamdulillah