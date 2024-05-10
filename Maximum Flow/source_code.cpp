
#include <iostream>
#include <limits.h>
#include <queue>
#include <string.h>
#include <fstream>
#include <chrono>

using namespace std;
using namespace std::chrono;

// Number of vertices in given graph
#define V 100

// Returns true if there is a path from source 's' to sink 't' in residual graph. Also fills parent[] to store the path
bool bfs(int rGraph[V][V], int s, int t, int parent[])
{
    bool visited[V];
    memset(visited, 0, sizeof(visited));

    queue<int> q;
    q.push(s);
    visited[s] = true;
    parent[s] = -1;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v = 0; v < V; v++)
        {
            if (!visited[v] && rGraph[u][v] > 0)
            {
                if (v == t)
                {
                    parent[v] = u;
                    return true;
                }
                q.push(v);
                parent[v] = u;
                visited[v] = true;
            }
        }
    }

    return false;
}

// Returns the maximum flow from s to t in the given graph
int fordFulkerson(int graph[V][V], int s, int t)
{
    int u, v;

    int rGraph[V][V];
    for (u = 0; u < V; u++)
        for (v = 0; v < V; v++)
            rGraph[u][v] = graph[u][v];

    int parent[V];
    int max_flow = 0;

    while (bfs(rGraph, s, t, parent))
    {
        int path_flow = INT_MAX;
        for (v = t; v != s; v = parent[v])
        {
            u = parent[v];
            path_flow = min(path_flow, rGraph[u][v]);
        }

        for (v = t; v != s; v = parent[v])
        {
            u = parent[v];
            rGraph[u][v] -= path_flow;
            rGraph[v][u] += path_flow;
        }

        max_flow += path_flow;
    }

    return max_flow;
}

int main()
{
    ifstream infile("input.txt");
    ofstream outfile("output.txt");

    int nodes;
    infile >> nodes; // Number of nodes

    int source, sink;
    infile >> source >> sink; // Source and Sink nodes

    int graph[V][V] = {0}; // Initialize graph with 0 capacities

    int u, v, weight;
    while (infile >> u >> v >> weight)
    {
        graph[u][v] = weight;
    }

    auto start = high_resolution_clock::now();
    int max_flow = fordFulkerson(graph, source, sink);
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<milliseconds>(stop - start);

    outfile << "Max Flow: " << max_flow << "\n";
    outfile << "Time taken using Ford Fulkerson Method: " << duration.count() << " milliseconds\n";

    infile.close();
    outfile.close();

    return 0;
}
