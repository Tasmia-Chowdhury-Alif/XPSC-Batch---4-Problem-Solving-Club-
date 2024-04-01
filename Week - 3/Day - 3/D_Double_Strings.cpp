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
        string a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        map<string, int> freq;
        for (int i = 0; i < n; i++)
        {
            freq[a[i]]++;
        }
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < a[i].size() ; j++)
            {
                string x , y ;
                for (int k = 0; k < j; k++)
                {
                    x.push_back(a[i][k]);
                }
                for (int k = j; k < a[i].size(); k++)
                {
                    y.push_back(a[i][k]);
                }
                
            }
            
        }
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
//         string a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         map<string, int> freq;
//         for (int i = 0; i < n; i++)
//         {
//             freq[a[i]]++;
//         }

//         string ans(n, '0');

//         for (int i = 0; i < n; i++)
//         {
//             if (a[i].size() == 1) // the string size is 1 so nothing to do
//                 continue;

//             for (int j = 0; j < a[i].size() ; j++)
//             {
//                 string x = "", y = "";
//                 for (int k = 0; k < j; k++)
//                 {
//                     x.push_back(a[i][k]);
//                 }
//                 for (int k = j ; k < a[i].size(); k++)
//                 {
//                     y.push_back(a[i][k]);
//                 }
//                 if (x == y)
//                 {
//                     if (freq[x] > 0)
//                     {
//                         cout<<x<<" "<<y<<"\n";
//                         ans[i] = '1';
//                         break;
//                     }
//                 }
//                 else
//                 {
//                     if (freq[x] > 0 and freq[y] > 0)
//                     {
//                         cout<<x<<" "<<y<<"\n";
//                         ans[i] = '1';
//                         break;
//                     }
//                 }
//                 if (ans[i] == '1')
//                     break;
//             }
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }