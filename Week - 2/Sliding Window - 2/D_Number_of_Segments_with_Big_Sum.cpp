#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n, s;
    cin >> n >> s;
    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll sum = 0, l = 0, r = 0;
    ll count = 0;

    while (r < n)
    {
        sum += a[r];
        while (sum >= s)
        {
            // cout << n << " - " << r << " : " << n - r << endl;
            count += (n - r);
            sum -= a[l];
            l++;
        }
        r++;
    }

    cout << count;

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

//     ll sum = 0, ans = 0, l = 0, r = n;

//     while (r >= l)
//     {
//         sum += a[r];
//         while (sum >= s)
//         {
//             ans += (r - l + 1);

//             sum -= a[l];
//             l++;
//         }

//         r++;
//     }

//     cout << ans;

//     return 0;
// }