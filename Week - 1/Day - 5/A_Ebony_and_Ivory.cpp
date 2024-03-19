#include <bits/stdc++.h>
using namespace std;

int dp[100][10001];
bool unbounded_knapsack(int n, int s, int weight[])
{
    if (n == 0)
    {
        if (s == 0)
            return true;
        else 
            return false ;
    }

    if (dp[n][s] != -1)
    {
        return dp[n][s];
    }

    if (weight[n - 1] <= s)
    {
        // here n = index
        bool opt1 = unbounded_knapsack(n, s - weight[n - 1], weight);
        bool opt2 = unbounded_knapsack(n - 1, s, weight);
        return dp[n][s] = opt1 || opt2;
    }
    else
    {
        return dp[n][s] = unbounded_knapsack(n - 1, s, weight);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int weight[2], c;
    cin >> weight[0] >> weight[1] >> c;

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= c; j++)
        {
            dp[i][j] = -1 ;
        }
    }

    if(unbounded_knapsack(2 , c , weight))
    {
        cout<<"Yes";
    }
    else cout<<"No";

    return 0;
}