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
        int n;
        cin >> n;
        string a;
        cin >> a;

        ll ans = 0;
        ll ch[n];

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'L')
            {
                ans += i;
            }
            else
            {
                ans += n - 1 - i;
            }

            if (a[i] == 'L')
            {
                ch[i] = (n - 1 - i) - i;
            }
            else
            {
                ch[i] = i - (n - 1 - i);
            }
        }
        sort(ch, ch + n);
        reverse(ch, ch + n);

        for (int i = 0; i < n; i++)
        {
            if (ch[i] > 0)
            {
                ans += ch[i];
            }
            cout << ans << " ";
        }
        cout << "\n";
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main()
// {
//     ll t, n, i, j, ans;
//     string a;
//     cin >> t;

//     for (; t--;)
//     {
//         cin >> n;
//         cin >> a;

//         ll ch[n];

//         ans = 0;

//         for (i = 0; i < n; i++)
//         {
//             if (a[i] == 'L')
//                 ans = ans + i;
//             else
//                 ans = ans + n - i - 1;

//             if (a[i] == 'L')
//             {
//                 ch[i] = n - i - 1 - (i);
//             }
//             else
//             {
//                 ch[i] = i - (n - i - 1);
//             }
//         }
//         sort(ch, ch + n);
//         reverse(ch, ch + n);

//         for (i = 0; i < n; i++)
//         {
//             if (ch[i] > 0)
//             {
//                 ans = ans + ch[i];
//             }
//             cout << ans << " ";
//         }
//         cout << "\n";
//     }
// }