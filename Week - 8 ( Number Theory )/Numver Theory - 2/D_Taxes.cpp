// Bismillah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool is_prime(int n)
{
    if (n == 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if (is_prime(n))
    {
        cout << 1;
    }
    else if (n % 2 == 0)
    {
        cout << 2;
    }
    else
    {
        if (is_prime(n - 2))
        {
            cout << 2;
        }
        else
            cout << 3;
    }

    return 0;
}
// Alhamdulillah