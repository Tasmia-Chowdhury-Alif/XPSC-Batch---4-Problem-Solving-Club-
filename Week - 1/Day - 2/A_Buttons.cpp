#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << a + b;
    }
    else
    {
        int m = max(a,b);
        cout<<m+(m-1);
    }
    return 0;
}