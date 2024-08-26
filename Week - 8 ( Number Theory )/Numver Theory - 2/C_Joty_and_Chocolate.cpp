// Bismillah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll lcm(ll a, ll b)
{
    return ((a * b) / __gcd(a, b));
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    ll ca = (n/a) , cb = (n/b) , over_lap = (n/lcm(a,b)) ;

    if(p > q)
    {
        cb -= over_lap ;
    }
    else ca -= over_lap ;

    cout << (ca * p) + (cb * q);
    return 0;
}
// Alhamdulillah


// // Bismillah
// #include <bits/stdc++.h>
// #define ll long long int
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     ll n, a, b, p, q;
//     cin >> n >> a >> b >> p >> q;

//     vector<bool> flag(n, false);
//     ll ca = 0, cb = 0;

//     for (ll i = a; i <= n; i += a)
//     {
//         flag[i] = true;
//         ca++;
//     }

//     for (ll i = b; i <= n; i += b)
//     {
//         if (flag[i])
//         {
//             if (q > p)
//             {
//                 ca--;
//                 cb++;
//             }
//         }
//         else
//         {
//             cb++;
//             flag[i] = true;
//         }
//     }

//     // cout<<ca<<" "<<cb<<endl;

//     cout << (ca * p) + (cb * q);
//     return 0;
// }
// // Alhamdulillah