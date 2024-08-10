// Bismillah
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool is_prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            return false ;
        }
    }
    return true; 
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n ;
    cin>>n;

    if(is_prime(n))
    {
        cout<<"Prime ";
    }
    else cout<<"NOT Prime ";
    return 0;
}
// Alhamdulillah