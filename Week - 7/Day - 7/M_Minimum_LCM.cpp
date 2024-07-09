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
        int n;
        cin >> n;

        int mn = INT_MAX ;

        int a = 1 , b ;

        for (int i = 2; i <= sqrt(n); i++)
        {
            if(n%i == 0)
            {
                a = n/i ;
                break;
            }
        }
        cout<< a <<" " << n-a <<endl;
        
    }
    return 0;
}
// Alhamdulillah

// // Bismillah
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int gcd(int a, int b) {
//     while (b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }

// // Function to compute lcm using gcd
// int lcm(int a, int b) {
//     return (a / gcd(a, b)) * b;
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

//         int mn = INT_MAX ;

//         int a = 1 , b = n-1 , i = 0 ;
//         while (i <= (n-1)/2 and a<n and b > 0)
//         {
//             mn = min(mn , lcm(a,b)) ;
//             a++;
//             b-- ;
//             i++ ;
//         }

//         a = 1 , b = n-1 , i = 0 ;
//         while (i <= (n-1)/2 and a<n and b > 0)
//         {
//             int x = lcm(a,b) ;
//             if(x == mn)
//             {
//                 break;
//             }
//             a++;
//             b-- ;
//             i++ ;
//         }

//         cout<<a<<" "<<b<<endl;
        
//     }
//     return 0;
// }
// // Alhamdulillah