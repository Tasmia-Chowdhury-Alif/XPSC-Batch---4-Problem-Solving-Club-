// Bismillah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int sum = __gcd(n, i);
        cout << sum + i ;
        cout << " : " << i << endl;
    }
    return 0;
}
// Alhamdulillah