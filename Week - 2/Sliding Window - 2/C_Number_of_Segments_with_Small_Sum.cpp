#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, s;
    cin >> n >> s;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll sum = 0, ans = 0, l = 0, r = 0;

    while (r < n)
    {
        sum += a[r];

        if (sum <= s)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (sum > s && l < r )
            {
                sum -= a[l];
                l++;
            }
            if (sum <= s)
            {
                ans += (r - l + 1);
            }
        }

        r++ ;
    }

    cout<<ans;
    return 0;
}

// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;
// int main()
// {
//     ll n, s;
//     cin >> n >> s;
//     vector<ll> a(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     ll sum = 0, l = 0, r = 0, ans = 0;
//     while (r < n)
//     {
//         sum += a[r];
//         if (sum > s )
//         {
//             sum -= a[r];
//             r--;
//             ll len = r - l + 1;

//             if (sum <= s)
//             {
//                 ans += (len * (len + 1)) / 2;
//                 // cout << len << "-" << (len * (len + 1)) / 2 << " " << sum << " ";
//                 l = r;
//                 sum = a[r];
//                 // cout << sum << endl;
//             }
//         }

//         if (r == n - 1)
//         {
//             ll len = r - l + 1;
//             if (sum <= s)
//                 ans += (len * (len + 1)) / 2;
//             // cout << len << "-" << (len * (len + 1)) / 2 << " " << sum << " ";
//             // cout << sum << endl;
//         }

//         r++;
//     }

//     cout << ans;
//     return 0;
// }