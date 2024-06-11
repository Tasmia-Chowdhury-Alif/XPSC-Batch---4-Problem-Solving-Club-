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
        ll intro, extro, uni;
        cin >> intro >> extro >> uni;

        bool flag = true;
        while (extro % 3 != 0)
        {
            if (uni == 0)
            {
                flag = false;
                break;
            }
            else
            {
                extro++;
                uni--;
            }
        }

        if (flag)
        {
            ll tent = intro;
            // cout<<tent <<" ";
            tent += extro / 3;
            // cout<<tent <<" ";
            if (uni < 3 && uni > 0)
            {
                tent += 1;
            }
            else
            {
                tent += ceil(static_cast<double>(uni)/ 3);
                // cout<<ceil(static_cast<double>(uni) / 3) <<" ";
            }

            cout << tent << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }

        // int req = extro % 3  ;
        // cout<< req  <<endl;
        // if()
    }

    return 0;
}