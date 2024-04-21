#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll get_sum(ll n)
{
    if (n == 0)
        return 0;

    ll sum = get_sum(n / 2);
    return sum + n;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << get_sum(n) << endl;
    }

    return 0;
}