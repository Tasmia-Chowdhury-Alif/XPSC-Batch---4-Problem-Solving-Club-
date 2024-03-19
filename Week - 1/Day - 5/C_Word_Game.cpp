#include <bits/stdc++.h>
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
        vector<string> s1(n);
        vector<string> s2(n);
        vector<string> s3(n);

        for (int i = 0; i < n; i++)
        {
            cin >> s1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> s2[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> s3[i];
        }

        int p1 = 0, p2 = 0, p3 = 0;

        for (string q : s1)
        {
            auto it2 = find(s2.begin(), s2.end(), q);
            auto it3 = find(s3.begin(), s3.end(), q);

            if (it2 != s2.end() && it3 != s3.end())
            {
                s2.erase(it2);
                s3.erase(it3);
            }
            else if (it2 == s2.end() && it3 == s3.end())
            {
                p1 += 3;
            }
            else
            {
                if (it2 != s2.end())
                {
                    s2.erase(it2);
                    p1 += 1;
                    p2 += 1;
                }
                if (it3 != s3.end())
                {
                    s3.erase(it3);
                    p1 += 1;
                    p3 += 1;
                }
            }
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << s1[i]<<" ";
        // }
        // cout<<endl;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << s2[i]<<" ";
        // }
        // cout<<endl;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << s3[i]<<" ";
        // }
        // cout<<endl;
        for (string q : s2)
        {
            auto it3 = find(s3.begin(), s3.end(), q);

            if (it3 == s3.end())
            {
                p2 += 3;
            }
            else
            {
                if (it3 != s3.end())
                {
                    s3.erase(it3);
                    p2 += 1;
                    p3 += 1;
                }
            }
        }
        for (string q : s3)
        {
            p3 += 3 ;
        }

        cout << p1 << " " << p2 << " " << p3 << endl;
    }
    return 0;
}