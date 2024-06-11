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
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        // bool flag = true;
        // for (int i = 0; i < n; i++)
        // {
        //     if (a[i] == 'b' && b[i] != 'b')
        //     {
        //         flag = false;
        //         break;
        //     }
        // }

        // if (flag)
        // {
            queue<int> b_b_pairs, c_a_pairs;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == 'b' and b[i] == 'b')
                {
                    b_b_pairs.push(i);
                }
                else if (a[i] == 'c' && b[i] == 'a')
                {
                    c_a_pairs.push(i);
                }
            }

            for (int i = 0; i < n; i++)
            {
                if (a[i] == 'a' and b[i] == 'c')
                {
                    if (!b_b_pairs.empty() and !c_a_pairs.empty())
                    {
                        if (b_b_pairs.front() < c_a_pairs.front())
                        {
                            swap(a[i], a[c_a_pairs.front()]);
                            c_a_pairs.pop();
                        }
                        else
                        {
                            break;
                        }
                    }
                }
                else
                {
                    if (!b_b_pairs.empty() and b_b_pairs.front() == i)
                    {
                        b_b_pairs.pop();
                    }
                    else if (!c_a_pairs.empty() and c_a_pairs.front() == i)
                    {
                        c_a_pairs.pop();
                    }
                }
            }
        // }

        if (a == b)
        {
            cout << "Yes" <<"\n"; 
        }
        else
        {
            cout << "No" <<"\n"; 
        }
    }

    return 0;
}