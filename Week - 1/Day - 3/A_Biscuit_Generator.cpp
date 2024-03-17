#include <bits/stdc++.h>
using namespace std;
int main()
{
    float a, b, t;
    cin >> a >> b >> t;
    t += 0.5;
    int ans = t / a;
    cout << ans*b ;
    return 0;
}