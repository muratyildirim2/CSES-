/*
Author: Murat Yıldırım
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mxN = 1e5;
vector<int> adj[mxN], ans;
bool vis[mxN];
void add_edge( int source, int destination)
{
    adj[source].push_back(destination);

    adj[destination].push_back(source);

}
void dfs(int u)
{
    vis[u] = 1;

    for(int v : adj[u])
    {
        if(!vis[v])
            dfs(v);
    }


}

void solve()
{

    int n, m;
    cin >> n >> m;

    for(int i = 0, a, b; i < m; ++i)
    {
        cin >> a >> b, --a, --b;

        add_edge(a, b);

        add_edge(b, a);

    }


    for(int i = 0; i < n; ++i)
    {
        if(!vis[i])
        {
            ans.push_back(i);
            dfs(i);
        }
    }


    cout << ans.size() - 1 << "\n";

    for(int i = 1; i < int(ans.size()); i++)
    {
        cout << ans[0] + 1 << " " << ans[i] + 1 << "\n";
    }


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
