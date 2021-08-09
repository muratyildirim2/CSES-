/*
Author: Murat Yıldırım
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 const int mxN=1e5;
void add_edge(vector<int>adj[], int source, int destination)
{
    adj[source].push_back(destination);
    // Undirected graph add edges
    adj[destination].push_back(source);

}
bool BFS(vector<int>adj[], int source, int destination, int v, int pred[], int dist[])
{

    list<int>queue;


    bool visited[v];


    for(int i = 0; i < v; i++)
    {
        visited[i] = false;
        dist[i] = INT_MAX;
        pred[i] = -1;
    }

    visited[source] = true;
    dist[source] = 0;
    queue.push_back(source);

    while(!queue.empty())
    {
        int u = queue.front();

        queue.pop_front();

        for(int i = 0; i < int(adj[u].size()); i++)
        {
            if(visited[adj[u][i]] == false)
            {
                visited[adj[u][i]] = true;
                dist[adj[u][i]] = dist[u] + 1;
                pred[adj[u][i]] = u;
                queue.push_back(adj[u][i]);

                if(adj[u][i] == destination)
                {
                    return true;
                }

            }

        }

    }
    return false;
}

void printShortestDistance(vector<int>adj[], int s, int destination, int v)
{

    int pred[v];
    int dist[v];


    if(BFS(adj, s, destination, v, pred, dist) == false)
    {
        cout << "IMPOSSIBLE\n";
        return;
    }

    vector<int>path;
    int crawl = destination;
    path.push_back(crawl);
       
    while(pred[crawl] != -1)
    {
        path.push_back(pred[crawl]);
        crawl = pred[crawl];
    }

    cout << dist[destination]+1 << "\n";

  
    for (int i = path.size() - 1; i >= 0; i--)
        cout << path[i]+1 << " ";
}

void solve()
{

    int v,k;
    
    cin>>v>>k;

    vector<int> adj[mxN];
      for(int i=0,a,b;i<k;i++){
          
        cin>>a>>b;
        a--;
          b--;
    add_edge(adj, a, b);
    
}

    int source = 0, dest = v-1;
    printShortestDistance(adj, source, dest, v);

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    /*
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
      */
    ll t = 1;
    // cin >> t;
    while (t-- )
    {
        solve();

    }

    return 0;
}
