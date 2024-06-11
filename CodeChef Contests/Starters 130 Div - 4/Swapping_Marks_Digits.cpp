#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;

        bool flag = false;

        string ra = a;
        reverse(ra.begin(), ra.end());
        string rb = b;
        reverse(rb.begin(), rb.end());

        if (a > b)
        {
            flag = true;
        }
        else if (ra > b || a > rb)
        {
            flag = true;
        }
        else if (ra > rb)
        {
            flag = true;
        }

        if (flag) cout << "Yes\n";
        else cout << "No\n";
    }
}





// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     // your code goes here
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string a, b;
//         cin >> a >> b;

//         bool flag = false;

//         int ra = reverse(a.begin(), a.end());
//         reverse(a.begin(), a.end());
//         int rb = reverse(a.begin(), a.end());
//         reverse(b.begin(), b.end());
//         int aa = reverse(a);
//         int bb = reverse(b);

//         if (aa > bb)
//         {
//             flag = true;
//         }
//         else if (ra > bb || aa > rb)
//         {
//             flag = true;
//         }
//         else if (ra > rb)
//         {
//             flag = true;
//         }

//         // if (a < b)
//         // {
//         //     if (a % 10 < b % 10)
//         //     {
//         //         flag = false;
//         //     }
//         //     else if (a % 10 == b % 10)
//         //     {
//         //         if (a / 10 < b / 10)
//         //         {
//         //             flag = false;
//         //         }
//         //     }
//         // }

//         if (flag) cout << "Yes\n";

//         else cout << "No\n";

//     }
// }