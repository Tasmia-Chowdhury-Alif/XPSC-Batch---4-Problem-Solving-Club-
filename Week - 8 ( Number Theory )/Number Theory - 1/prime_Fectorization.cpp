// Bismillah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    map<int, int> cnt;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                cnt[i]++;
                n /= i;
            }
        }
    }

    if (n > 1)
    {
        cnt[n]++;
    }

    // cout<<"Alif";
    string s;
    for (auto [x, y] : cnt)
    {
        for (int i = 0; i < y; i++)
        {
            s += '0' + x ;
            s += " X ";
        }
    }
    for (int i = 0; i < s.size()-3; i++)
    {
        cout<<s[i];
    }
    
    return 0;
}
// Alhamdulillah