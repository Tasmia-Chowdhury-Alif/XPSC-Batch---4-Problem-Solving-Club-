#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int row = n * 2, colam = n * 2;

        int flag = 1;
        for (int i = 1; i <= row; i++)
        {
            if (flag == 1 or flag == 2)
            {
                for (int j = 1; j <= n; j++)
                {
                    if (j % 2 != 0)
                    {
                        cout << "##";
                    }
                    else
                    {
                        cout << "..";
                    }
                }
            }
            else
            {
                for (int j = 1; j <= n; j++)
                {
                    if (j % 2 != 0)
                    {
                        cout << "..";
                    }
                    else
                    {
                        cout << "##";
                    }
                }
            }
            cout << endl;

            if(flag == 1 or flag == 2 or flag == 3)
            {
                flag ++;
            }
            else if(flag == 4)
            {
                flag = 1;
            }
        }
    }

    return 0;
}