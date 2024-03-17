#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool flag[26];
    memset(flag, false, sizeof(flag));
    for (char c : s)
    {
        flag[c - 97] = true;
    }

    int index = -1;
    for (int i = 0; i < 26; i++)
    {
        if (flag[i] == false)
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        cout << "None";
    }
    else
    {
        char ans = index + 97;
        cout << ans;
    }

    return 0;
}