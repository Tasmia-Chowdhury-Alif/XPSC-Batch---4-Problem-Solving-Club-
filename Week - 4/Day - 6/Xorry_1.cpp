// #include <iostream>
// #include <utility> // Added for using the 'pair' type
// using namespace std;

// // pair<int, int> findXorryPair(int X)
// // {
// //     int A, B = 0;
// //     int bitPosition = 0;

// //     while ((1 << bitPosition) < X)
// //     {
// //         bitPosition++;
// //     }
// //     // cout<<bitPosition-1<<" ";

// //     int MSB = max(0, 1 << (bitPosition - 1));
// //     // cout<<MSB<<" ";
// //     A = MSB;
// //     B = A ^ X;
// //     return {B, A};
// // }

// int main()
// {
//     int T, X;
//     cin >> T; // Input statement to initialize the variable T

//     while (T--) // Change to ensure the loop iterates T times
//     {
//         cin >> X;

//         int A, B = 0;
//         int bitPosition = 0;

//         while ((1 << bitPosition) <= X)
//         {
//             bitPosition++;
//         }
//         // cout<<bitPosition-1<<" ";

//         int MSB = 1 << (bitPosition - 1);
//         // cout<<MSB<<" ";
//         A = MSB;
//         B = A ^ X;
//         cout << A << " " << B << endl;

//         // pair<int, int> xorryPair = findXorryPair(X); // Added missing semicolon and assignment operator
//         // cout << xorryPair.first << " " << xorryPair.second << endl;
//     }

//     return 0;
// }

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

        int x;
        cin >> x;

        int msb = 0, a = 0, b = 0;
        while ((1 << msb) <= x)
        {
            msb++;
        }

        msb = 1 << (msb - 1);
        a = msb;
        b = a ^ x;
        cout << b << " " << a << endl;
    }
    return 0;
}
// Alhamdulillah