#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> heights(N);
    for (int i = 0; i < N; i++)
    {
        cin >> heights[i];
    }
    int Q;
    cin >> Q;
    while (Q--)
    {
        int height;
        cin >> height;
        auto upper = upper_bound(heights.begin(), heights.end(), height);
        auto lower = lower_bound(heights.begin(), heights.end(), height);
        if (lower == heights.begin() and lower != heights.end())
        {
            cout << "X ";
        }
        else
        {
            cout << *(--lower) << " ";
        }
        if (upper == heights.end())
        {
            cout << "X\n";
        }
        else
        {
            cout << *upper << "\n";
        }
    }
    return 0;
}

// // Bismillah
// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int k;
//         cin >> k;

//         int l = 0, r = n - 1, it1 = -1;
//         while (l <= r)
//         {
//             int mid = (l + r) / 2;
//             if (a[mid] <= k - 1)
//             {
//                 it1 = mid;
//                 l = mid + 1;
//             }
//             else
//             {
//                 r = mid - 1;
//             }
//         }

//         l = 0, r = n - 1;
//         int it2 = -1;
//         while (l <= r)
//         {
//             int mid = (l + r) / 2;
//             if (a[mid] >= k + 1)
//             {
//                 it1 = mid;
//                 r = mid - 1;
//             }
//             else
//             {
//                 l = mid + 1;
//             }
//         }

//         if (it1 == -1)
//         {
//             cout << 'X' << " ";
//         }
//         else
//             cout << a[it1] << " ";
//         if (it2 == -1)
//         {
//             cout << 'X' << " ";
//         }
//         else
//             cout << a[it2] << " ";
//         cout << endl;
//     }

//     return 0;
// }
// // Alhamdulillah