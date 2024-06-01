// Bismillah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

string dec_to_bin(int n)
{
    string s;
    for (int i = 31; i >= 0; i--)
    {
        if (n & (1 << i))
        {
            s += '1';
        }
        else
            s += '0';
    }
    return s;
}

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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // to count on bits
        vector<int> bt(32);

        for (int i = 0; i < n; i++)
        {
            string s = dec_to_bin(a[i]);
            for (int j = 32; j >= 0; j--)
            {
                if (s[j] == '1')
                {
                    bt[j]++;
                }
            }
        }

        int g = 0;
        for (int i = 0; i < 32; i++)
        {
            g = __gcd(g, bt[i]);
        }

        for (int i = 1; i <= n; i++)
        {
            if (g % i == 0)
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
// Alhamdulillah





// // Bismillah
// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;

// string decToBinary(int n)
// {
//     // Size of an integer is assumed to be 32 bits
//     string ans;
//     for (int i = 32; i >= 0; i--)
//     {
//         int k = n >> i;
//         if (k & 1)
//             ans += '1';
//         else
//             ans += '0';
//     }
//     return ans;
// }

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
//         vector<int> v(n);
//         for (int i = 0; i < n; i++)
//             cin >> v[i];
//         vector<int> m(32);
//         int g = 0;
//         for (int i = 0; i < n; i++)
//         {
//             string s = decToBinary(v[i]);
//             for (int j = 0; j < 32; j++)
//             {
//                 if (s[j] != '0')
//                     m[j]++;
//             }
//         }

//         for (int i = 0; i < 32; i++)
//             g = __gcd(g, m[i]);

//         cout<<g<<" => ";
//         for (int i = 1; i <= n; i++)
//         {
//             if (g % i == 0)
//                 cout << i << ' ';
//         }
//         cout << endl;
//     }
//     return 0;
// }
// // Alhamdulillah