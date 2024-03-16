#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int i = 2;

    while (true)
    {
        int mlt = c * i;
        if (mlt > a && mlt < b)
        {
            cout << mlt;
            break;
        }
        if (mlt < a)
        {
            i++;
        }
        else if (mlt > b)
        {
            cout << -1;
            break;
        }
    }

    return 0;
}