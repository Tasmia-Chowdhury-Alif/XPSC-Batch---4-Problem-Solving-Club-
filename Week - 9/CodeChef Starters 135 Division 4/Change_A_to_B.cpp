#include <bits/stdc++.h>
#define ll long long int
using namespace std;

using namespace std;

// Function to perform BFS and find the minimum operations
int minOperations(int a, int b)
{
    if (a == b)
        return 0;

    queue<pair<int, int>> q;    // Queue to store the current value and the number of operations
    unordered_set<int> visited; // Set to store visited nodes
    q.push({a, 0});
    visited.insert(a);

    while (!q.empty())
    {
        auto [current, steps] = q.front();
        q.pop();

        // Generate possible next steps
        vector<int> nextSteps = {current * 2, current - 1};

        for (int next : nextSteps)
        {
            if (next == b)
            {
                return steps + 1; // Found the target
            }

            if (next > 0 && visited.find(next) == visited.end())
            {
                visited.insert(next);
                q.push({next, steps + 1});
            }
        }
    }

    return -1; // This should never be reached due to the problem constraints
}

int main()
{
    int t;
    cin >> t; // Number of test cases

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << minOperations(a, b) << endl;
    }

    return 0;
}
