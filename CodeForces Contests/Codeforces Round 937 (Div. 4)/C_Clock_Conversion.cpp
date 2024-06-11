#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int h1 = s[0] - '0';
        int h2 = s[1] - '0';
        int m1 = s[3] - '0';
        int m2 = s[4] - '0';
        string d;

        if ((h1 == 0 && (h2 >= 1 && h2 <= 9)) or (h1 == 1 && (h2 == 0 or h2 == 1)))
        {
            cout << h1 << h2 << ":" << m1 << m2 << " AM\n";
        }
        else if (h1 == 1 && h2 == 2)
        {
            cout << h1 << h2 << ":" << m1 << m2 << " PM\n";
        }
        else if (h1 == 0 && h2 == 0)
        {
            h1 = 1;
            h2 = 2;
            cout << h1 << h2 << ":" << m1 << m2 << " AM\n";
        }
        else if (h1 == 1 && (h2 >= 3 && h2 <= 9))
        {
            h1 = 0;
            h2 = h2 - 2;
            cout << h1 << h2 << ":" << m1 << m2 << " PM\n";
        }
        else if (h1 == 2)
        {
            if (h2 == 0 or h2 == 1)
            {
                h1 = 0;
                h2 += 8;
                cout << h1 << h2 << ":" << m1 << m2 << " PM\n";
            }
            else
            {
                h2 += 8;
                cout << h2 << ":" << m1 << m2 << " PM\n";
            }
        }

        // cout<<h1<<h2<<" "<<h<<endl;
    }

    return 0;
}