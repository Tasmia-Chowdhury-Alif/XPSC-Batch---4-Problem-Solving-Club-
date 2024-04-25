#include <bits/stdc++.h>
#define ll long long int
using namespace std;
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
        vector<int> om(n), addy(n);
        for (int i = 0; i < n; i++)
        {
            cin >> om[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> addy[i];
        }

        int a = 0, b = 0, x = 0;
        for (int i = 0; i < n; i++)
        {
            if (om[i] > 0)
            {
                x++;
                a = max(a, x);
            }
            else
                x = 0;
        }
        x = 0;
        for (int i = 0; i < n; i++)
        {
            if (addy[i] > 0)
            {
                x++;
                b = max(b, x);
            }
            else
                x = 0;
        }

        if (a > b)
        {
            cout << "Om";
        }
        else if (a == b)
        {
            cout << "Draw";
        }
        else
        {
            cout << "Addy";
        }
        cout << "\n";
    }

    return 0;
}