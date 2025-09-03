#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>
using namespace std;

void bfsAl(const vector<vector<int>> &graph, int start_node)
{
    queue<int> q;
    unordered_set<int> visited;

    q.push(start_node);
    visited.insert(start_node);

    while (!q.empty())
    {
        int present_node = q.front();
        q.pop();

        cout << present_node << " ";

        for (int neighbourN : graph[present_node])
        {
            if (visited.find(neighbourN) == visited.end())
            {
                visited.insert(neighbourN);
                q.push(neighbourN);
            }
        }
    }
}

int main()
{

    vector<vector<int>> adj_list = {
        {1, 2},
        {0, 3},
        {0, 4},
        {0, 5},
        {2, 5},
        {3, 6},
    };

    int start_node = 0;
    cout << "BFS traverse: ";
    bfsAl(adj_list, start_node);

    cout << endl;

    return 0;
}