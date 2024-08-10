// Bismillah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

vector<int> prime;

void sieve(int n)
{
    vector<bool> pr(n + 1, true);
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (pr[i])
        {
            for (int j = i + i; j <= n; j += i)
            {
                pr[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (pr[i])
        {
            prime.push_back(i);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    sieve(n);

    map<int, int> factor;
    int idx = 0;
    while (n > 1)
    {
        if (n % prime[idx] == 0)
        {
            while (n % prime[idx] == 0)
            {
                n /= prime[idx];
                factor[prime[idx]]++;
            }
        }
        else
            idx++;
    }

    string s;
    for (auto [x, y] : factor)
    {
        for (int i = 0; i < y; i++)
        {
            s += '0' + x;
            s += " X ";
        }
    }
    for (int i = 0; i < s.size() - 3; i++)
    {
        cout << s[i];
    }

    return 0;
}
// Alhamdulillah