// Bismillah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e5 + 5;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    unordered_map<int, int> factor;

    for (int i = 0; i < n; i++)
    {
        int num = a[i];
        for (int j = 2; j <= sqrt(num); j++)
        {
            if (num % j == 0)
            {
                factor[j]++;
                while (num % j == 0)
                {
                    num /= j;
                }
            }
        }
        if (num > 1)
            factor[num]++;
    }

    int ans = 1;
    for (auto [x, y] : factor)
    {
        ans = max(ans, y);
    }

    cout << ans << endl;

    return 0;
}
// Alhamdulillah


// // Bismillah
// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;
// const int N = 1e5 + 5;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }

//     // sieve's Algorithm
//     vector<bool> prime(sqrt(N) + 1, true);
//     for (int i = 2; i <= sqrt(N); i++)
//     {
//         if (prime[i])
//         {
//             for (int j = i + i; j <= sqrt(N); j += i)
//             {
//                 prime[j] = false;
//             }
//         }
//     }

//     int mx = 1, cnt;
//     for (int i = 2; i <= sqrt(N); i++)
//     {
//         if (prime[i])
//         {
//             cnt = 0;
//             for (int j = 0; j < n; j++)
//             {
//                 if (v[j] % i == 0)
//                 {
//                     cnt++;
//                 }
//             }
//             mx = max(mx, cnt);
//         }
//     }

//     cout << mx << endl;

//     return 0;
// }
// // Alhamdulillah