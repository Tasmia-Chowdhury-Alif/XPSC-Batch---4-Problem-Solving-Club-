#include <bits/stdc++.h>

using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        set<int> st;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool flag = false;

        for (int i = n - 1; i >= 0; i--)
        {
            if (st.count(a[i]))
            {
                flag = true;
                cout << i + 1 << endl;
                break;
            }
            st.insert(a[i]);
        }

        if (!flag)
        {
            cout << 0 << endl;
        }
    }
}