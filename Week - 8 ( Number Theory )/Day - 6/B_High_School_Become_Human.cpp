// Bismillah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    double x, y;
    cin >> x >> y;

    
    double a = y * log(x);
    double b = x * log(y);
    // cout << a << " " << b << endl;
    // ll a = pow(x, y);
    // ll b = pow(y, x);

    if (a == b or x == y )
        cout << "=";
    else if (a > b)
        cout << ">";
    else
        cout << "<";
    return 0;
}
// Alhamdulillah