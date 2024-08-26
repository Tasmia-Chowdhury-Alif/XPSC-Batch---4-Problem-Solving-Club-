// Bismillah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int gcd(int a , int b)
{
    return __gcd(a,b);
}

int lcm(int a, int b)
{
    return ((a * b) / __gcd(a, b));
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    cout << "GCD of a and b is = " << __gcd(a, b) << endl;

    cout << "LCM of a and b is = " << lcm(a, b) << endl;

    return 0;
}
// Alhamdulillah