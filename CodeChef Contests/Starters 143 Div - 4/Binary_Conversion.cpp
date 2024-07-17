// Bismillah
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string a, b;
        cin >> a >> b;

        int za = 0, zb = 0, ona = 0, onb = 0, diff = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i]) diff++;

            if (a[i] == '0') za++;
            else ona++;

            if (b[i] == '0') zb++;
            else onb++;
        }

        // diff = (diff / 2);

        // cout << diff << endl;
        // cout<<za <<" "<<zb<<" "<<ona<<" "<<onb<<endl;

        bool flag = true;

        if ((za != zb) || (ona != onb))
        {
            cout << 1 << " ";
            flag = false;
        }
        // else if (n == 2 && (diff / 2) < k && (diff / 2) > 0 && a[0] != a[1])
        else if (n == 2)
        {
            for (int i = 0; i < k; i++)
            {
                swap(a[0], a[1]);
            }
            if (a != b)
            {
                cout << 2 << " ";
                flag = false;
            }
        }
        else if ((diff / 2) > k)
        {
            cout << 3 << " ";
            flag = false;
        }


        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
// Alhamdulillah