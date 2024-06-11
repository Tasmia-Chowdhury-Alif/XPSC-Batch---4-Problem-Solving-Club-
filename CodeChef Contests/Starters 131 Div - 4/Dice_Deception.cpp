#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < 4 and k > 0)
            {
                if (a[i] == 1)
                    sum += 6;
                else if (a[i] == 2)
                    sum += 5;
                else if (a[i] == 3)
                    sum += 4;

                k--;
            }
            else
            {
                sum += a[i];
            }
        }
        cout << sum << endl;
    }

    return 0;
}