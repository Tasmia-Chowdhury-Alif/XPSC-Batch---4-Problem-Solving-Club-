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

    map<int, int> cnt;
    int c = 0;

    sieve(n);

    int idx = 0;
    while (n > 0)
    {
        if (prime[idx] > n)
        {
            cnt[n]++;
            c++;
            break;
        }
        if (n - prime[idx] >= prime[idx] or n - prime[idx] == 0)
        {
            while (n - prime[idx] >= prime[idx] or n - prime[idx] == 0)
            {
                n -= prime[idx];
                cnt[prime[idx]]++;
                c++;
            }
        }
        else
            idx++;
    }

    cout << c << endl;
    for (auto [x, y] : cnt)
    {
        for (int i = 0; i < y; i++)
        {
            cout << x << " ";
        }
    }
    return 0;
}
// Alhamdulillah