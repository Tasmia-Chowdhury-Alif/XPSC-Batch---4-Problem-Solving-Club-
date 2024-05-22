#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

#define INF 1e9

void floydWarshall(vector<vector<int>> &graph)
{
    int n = graph.size();
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (graph[i][k] != INF && graph[k][j] != INF)
                    graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
            }
        }
    }
}

int main()
{
    // Initialize graph
    int n = 3;
    vector<vector<int>> graph(n, vector<int>(n, INF));
    vector<tuple<int, int, int>> edges = {{0, 1, -4}, {1, 2, -3}, {2, 0, -2}};

    // Fill graph
    for (auto &edge : edges)
    {
        int u, v, w;
        tie(u, v, w) = edge;
        graph[u][v] = w;
        graph[v][u] = w;
    }

    // Set diagonal to 0
    for (int i = 0; i < n; i++)
        graph[i][i] = 0;

    // Run Floyd-Warshall
    floydWarshall(graph);

    // // Print distances
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (graph[i][j] == INF)
    //         {
    //             cout << "INF ";
    //         }
    //         else
    //         {
    //             cout << graph[i][j] << " ";
    //         }
    //     }
    //     cout << "\n";
    // }
    cout<<graph[0][n-1]<<endl;

    return 0;
}
