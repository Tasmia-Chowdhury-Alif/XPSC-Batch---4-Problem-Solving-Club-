// Bismillah
#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int N;
        cin >> N; // Length of the array

        vector<int> arr(N);
        for (int i = 0; i < N; ++i) {
            cin >> arr[i];
        }

        int good_prefix_count = 0;
        long long current_sum = 0;

        for (int i = 0; i < N; ++i) {
            current_sum += arr[i];
            if (current_sum >= 0) {
                ++good_prefix_count;
            }
        }

        cout << good_prefix_count << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

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
//         int n;
//         cin >> n;

//         vector<ll> a(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         // sort(a.begin(), a.end());

//         vector<ll> pref(n);
//         pref[0] = a[0];
//         for (int i = 1; i < n; i++)
//         {
//             pref[i] = a[i] + pref[i - 1];
//             // cout << pref[i] << " ";
//         }
//         // cout << endl << "=> ";

//         vector<int> flag(n, 0);

//         ll ans = 0;
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j <= i; j++)
//             {
//                 if (pref[i] - a[j] == a[j] and (flag[j] == 0 or a[i] == 0))
//                 {
//                     // cout << a[j] << " " << j << " => ";
//                     ans++;
//                     flag[j] = 1;
//                     break;
//                 }
//             }
//         }
//         // cout << endl;
//         cout << ans << endl;
//     }
//     return 0;
// }
// // Alhamdulillah