#include <bits/stdc++.h>
#define ll long long int
using namespace std;

class Cmp
{
public:
    bool operator()(int p1, int p2)
    {
        // return "true" if "p1" is ordered before "p2", for example:
        return p1 > p2;
    }
};

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

        priority_queue<int, vector<int>, Cmp> a;
        priority_queue<int, vector<int>, Cmp> b;
        priority_queue<int, vector<int>, Cmp> c;
        for (int i = 0; i < n; i++)
        {
            char x;
            cin >> x;
            if (x == 'a')
            {
                a.push(i);
            }
            else if (x == 'b' && !a.empty())
            {
                b.push(a.top());
            }
            else if (x == 'c' && !b.empty())
            {
                c.push(b.top());
            }
        }

        int ans = min({a.size(), b.size(), c.size()});
        cout << ans << "\n";
    }
    return 0;
}



// // Bismillah
// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;

// class Cmp
// {
// public:
//     bool operator()(int const &p1, int const &p2)
//     {
//         // return "true" if "p1" is ordered before "p2", for example:
//         return p1 > p2;
//     }
// };

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

//         priority_queue<int, vector<int>, Cmp> a;
//         priority_queue<int, vector<int>, Cmp> b;
//         priority_queue<int, vector<int>, Cmp> c;
//         for (int i = 0; i < n; i++)
//         {
//             char x;
//             cin >> x;
//             if (x == 'a')
//             {
//                 a.push(i);
//             }
//             else if (x == 'b' and !a.empty())
//             {
//                 b.push(i);
//             }
//             else if (x == 'b' and !a.empty() and !b.empty())
//             {
//                 c.push(i);
//             }
//         }
//         int i = a.top();
//         int ans = 0;
//         while (true)
//         {
//             while (!b.empty() and b.top() < i)
//             {
//                 b.pop();
//             }
//             while (!c.empty() and c.top() < i)
//             {
//                 c.pop();
//             }

//             if (a.empty() or b.empty() or c.empty())
//             {
//                 break;
//             }
//             else
//             {
//                 if (a.size() < c.size())
//                 {
//                     a.pop();
//                 }
//                 else
//                 {
//                     c.pop();
//                 }
//                 ans++;
//             }
//         }
//         cout << ans << "\n";
//     }
//     return 0;
// }
// // Alhamdulillah