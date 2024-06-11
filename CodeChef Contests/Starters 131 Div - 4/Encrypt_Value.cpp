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
//         sort(a.begin(), a.end());

//         ll sum = a[0];

//         for (int i = 1; i < n; i++)
//         {
//             if (sum <= 2 || a[i] <= 2)
//             {
//                 sum += a[i];
//             }
//             else
//             {
//                 sum *= a[i];
//             }
//             sum %= 1000000007;
//         }

//         cout << sum << "\n";
//     }

//     return 0;
// }

#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int MOD = 1e9 + 7;

int main()
{
    ios_base::sync_with_stdio(false);
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
        sort(a.begin(), a.end());

        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1 || sum == 0 || sum == 1)
            {
                sum += a[i];
                cout << " + " << sum;
            }
            else
            {
                sum *= a[i];
                cout << " X " << sum;
            }
            sum %= MOD;
        }

        cout << " = " << sum << endl;
    }

    return 0;
}

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
//         sort(a.begin(), a.end());

//         ll sum = a[0];

//         for (int i = 1; i < n; i++)
//         {
//             if (a[i] == 1)
//             {
//                 sum += a[i];
//             }
//             else
//             {
//                 sum *= a[i];
//             }
//                 sum %= 1000000007;
//         }

//         cout << sum << "\n";
//     }

//     return 0;
// }