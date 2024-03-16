#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;

    if (n.size() == 4)
    {
        cout << n;
    }
    else
    {
        int z = 4 - n.size();
        for (int i = 0; i < z; i++)
        {
            cout << 0;
        }
        cout << n;
    }
    return 0;
}