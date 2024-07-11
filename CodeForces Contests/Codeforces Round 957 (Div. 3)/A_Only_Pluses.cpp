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
        int a , b , c ;
        cin >> a >> b >> c;

        int ans = 0 ;

        // Try all possible ways to distribute the 5 increments
        for (int i = 0; i <= 5; ++i) {
            for (int j = 0; j <= 5 - i; ++j) 
            {
                int k = 5 - i - j;
                int a_n = a + i;
                int b_n = b + j;
                int c_n = c + k;
                ans = max(ans, a_n * b_n * c_n);
            }
        }

        
        cout<<ans<<endl;
        
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
//         int a , b , c ;
//         cin >> a >> b >> c;

//         int i = 5 ;
//         while (i > 0)
//         {
//             if(a < 10 and i > 0)
//             {
//                 a++;
//                 i--;
//             } 
//             if(b<10 and i > 0)
//             {
//                 b++;
//                 i-- ;
//             }
//             if(c<10 and i > 0)
//             {
//                 c++;
//                 i-- ;
//             }

//             if( a >= 10 and b >= 10 and c >= 10)
//             {
//                 if(a > b and a > c)
//                 {
//                     a+=i;
//                 }
//                 else if(b > a and b > c)
//                 {
//                     b += i ;
//                 }
//                 else 
//                 {
//                     c += i;
//                 }
//                 break;
//             }

//         }
        
//         cout<<a*b*c<<endl;
        
//     }
//     return 0;
// }
// // Alhamdulillah