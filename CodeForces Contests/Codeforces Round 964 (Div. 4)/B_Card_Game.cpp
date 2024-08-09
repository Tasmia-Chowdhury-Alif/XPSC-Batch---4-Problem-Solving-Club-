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
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int ans = 0;

        if (a > c and b > d)
        {
            ans++;
        }
        else if ((a > c or b > d) and (a == c or b == d))
        {
            ans++;
        }

        if (b > c and a > d)
        {
            ans++;
        }
        else if ((b > c or a > d) and (b == c or a == d))
        {
            ans++;
        }

        cout << ans * 2 << endl;
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
//         vector<int> a(2);
//         vector<int> b(2);
//         for (int i = 0; i < 2; i++)
//         {
//             cin >> a[i];
//         }
//         for (int i = 0; i < 2; i++)
//         {
//             cin >> b[i];
//         }

//         sort(a.begin(), a.end());
//         sort(b.begin(), b.end());

//         int s1 = 0, s2 = 0;

//         for (int i = 0; i < 2; i++)
//         {
//             if (a > b[i])
//             {
//                 s1++;
//             }

//             if (b > b[i])
//             {
//                 s2++;
//             }
//         }

//         // cout<<s1<<" "<<s2<<endl;

//         if (s1 == 0 or s2 == 0)
//         {
//             cout << 0 << endl;
//         }
//         else if (s1 == 2 and s2 == 2)
//         {
//             cout << 4 << endl;
//         }
//         else if ((s1 == 1 and s2 >= 2) or (s2 == 1 and s1 >= 2))
//         {
//             cout << 2 << endl;
//         }
//         else cout << 0 << endl;
//     }
//     return 0;
// }
// // Alhamdulillah