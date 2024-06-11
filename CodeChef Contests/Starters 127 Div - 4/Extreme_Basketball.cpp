#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int goal = 0;
        if (a > b && a - b >= 10)
        {
            cout << goal << endl;
        }
        else
        {
            int remain;
            if (a > b)
            {
                remain = 10 - (a - b);
                goal = (remain + 2) / 3;
            }
            else
            {
                remain = (b - a) + 10;
                goal = (remain + 2) / 3;
            }
            cout << goal << endl;
        }
    }
}
