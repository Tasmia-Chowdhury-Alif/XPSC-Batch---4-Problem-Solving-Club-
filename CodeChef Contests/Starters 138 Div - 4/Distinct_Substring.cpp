// Bismillah
#include <bits/stdc++.h>
#define ll long long
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
        cin >> n >> k;

        if (k > n || (long long)k * (k + 1) / 2 > n)
        {
            cout << "NO" << endl;
            continue;
        }

        if (k == 1)
        {
            cout << "YES" << endl;
            continue;
        }

        int remaining_length = n - k * (k + 1) / 2;
        if (remaining_length >= k)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
// Alhamdulillah



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
//         int n, k;
//         cin >> n >> k;

//         int cnt = 0, i = 2;
//         bool flag = false;

//         if (n == 1 and k == 1)
//         {
//             flag = true;
//         }

//         while (n > 0)
//         {
//             if (cnt == k)
//             {
//                 flag = true;
//                 break;
//             }

//             if (n - i >= 0)
//             {
//                 n -= i;
//                 cnt++;
//                 i++;
//             }
//             else
//             {
//                 break;
//             }
//         }
//         if (cnt >= k)
//         {
//             flag = true;
//         }

//         if (flag)
//             cout << "YES";
//         else
//             cout << "NO";
//         cout << endl;
//     }
//     return 0;
// }
// // Alhamdulillah