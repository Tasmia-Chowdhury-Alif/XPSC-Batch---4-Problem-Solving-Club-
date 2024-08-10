#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<bool> prime(n+1 , true );
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(prime[i])
        {
            for (int j = i+i; j <= n; j+=i)
            {
                prime[j] = false ;
            }
        }
    }
    
    for (int i = 2; i <= n; i++)
    {
        if(prime[i])
        {
            cout<<i<<" ";
        }
    }
    
    return 0;
}

// // Bismillah
// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n ;
//     cin>>n;
//     vector<bool> prime(n+1 , true) ;

//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         if(prime[i])
//         {
//             for (int j = i+i ; j <= n; j += i)
//             {
//                 prime[j] = false ;
//             }
//         }
//     }

//     for (int i = 2; i <= n; i++)
//     {
//         if(prime[i])
//         {
//             cout<<i<<" ";
//         }
//     }
//     cout<<endl;
//     return 0;
// }
// // Alhamdulillah