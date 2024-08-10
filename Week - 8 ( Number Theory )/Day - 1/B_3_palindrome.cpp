// Bismillah 
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string a;

    int i = 0;
    while (i < n)
    {
        // cout << i << " ";
        for (int j = 1; j <= 4; j++)
        {
            if (i < n and (j == 1 or j == 2))
            {
                a.push_back('a');
                i++;
            }
            else if (i < n and (j == 3 or j == 4))
            {
                a.push_back('b');
                i++;
            }
            else break;
            // cout << i << " ";
        }
    }

    // cout << a.size() << endl;
    cout << a;
    return 0;
}
// Alhamdulillah 