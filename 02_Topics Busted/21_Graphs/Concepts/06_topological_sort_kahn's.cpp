#include <bits/stdc++.h>
using namespace std;

vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)
{

    // creat adj list
    unordered_map<int, list<int>> adj;
    for (int i = 0; i < e; i++)
    {

        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }

    // find all indegrees

    vector<int> indegree(v);
    for (auto i : adj)
    {
        for (auto j : i.second)
        {
            indegree[j]++;
        }
    }

    // 0 indegree walon ko push kardo queue mein

    queue<int> q;
    for (int i = 0; i < v; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }

    // do bfs

    vector<int> ans;
    while (!q.empty())
    {
        int front = q.front();
        q.pop();

        // ans store
        ans.push_back(front);

        // neighbour indegree update karde
        for (auto neighbour : adj[front])
        {
            indegree[neighbour]--;

            if (indegree[neighbour] == 0)
                q.push(neighbour);
        }
    }
    return ans;
}
int main()
{
    int a;
    cout << endl;
    return 0;
}