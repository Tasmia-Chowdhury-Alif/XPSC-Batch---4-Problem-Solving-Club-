#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string noise, cat = "meow" , s ;
        cin >> noise;

        for (int i = 0; i < n; i++)
        {
            if (noise[i] <= 90)
                noise[i] += 32;
        }

        for (int i = 0; i < n; i++)
        {
            if (s.empty() or s.back() != noise[i])
            {
                s.push_back(noise[i]);
            }
        }

        if ( s == cat)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         string noise, cat = "meow";
//         cin >> noise;

//         int i = 0, j = 0, sz = n;
//         bool flag = true;
//         while (j < cat.size())
//         {
//             int no = noise[i], no2 = noise[i + 1], ca = cat[j];
//             if (abs(no - no2) == 0 || abs(no - no2) == 32)
//             {
//                 cout<<noise[i]<<" ";
//                 while (true)
//                 {
//                     if (abs(no - no2) == 0 || abs(no - no2) == 32)
//                     {
//                         no2 = noise[i + 1];
//                         i++;
//                         sz--;
//                     }
//                     else
//                     {
//                         i--;
//                         sz++;
//                         break;
//                     }
//                 }
//             }

//             if (noise[i] == cat[j] || (abs(no - ca) == 32))
//             {
//                 i++;
//                 j++;
//             }
//             else
//             {
//                 // cout<< noise[i]<<" "<<cat[j]<<" ";
//                 flag = false;
//                 break;
//             }
//         }

//         cout << sz << " " << cat.size() << " ";

//         if (flag && sz == cat.size())
//         {
//             cout << "YES\n";
//         }
//         else
//             cout << "NO\n";
//     }

//     return 0;
// }