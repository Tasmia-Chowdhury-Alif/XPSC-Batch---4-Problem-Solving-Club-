#include <bits/stdc++.h>
using namespace std;
bool palindrom(vector<int> a, int n, int x)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (a[i] == x)
        {
            i++;
        }
        else if (a[j] == x)
        {
            j--;
        }
        else if (a[i] != a[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            if (a[i] != a[n - 1 - i])
            {
                flag = palindrom(a, n, a[i]) or palindrom(a, n, a[n - 1 - i]);
                break;
            }
        }
        if (flag)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}