/*
Author: Murat Yıldırım
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int mxN = 1e3;

string s[mxN];

int control(int i, int j, int n, int m)
{

    return i >= 0 && j >= 0 && i < n && j < m && s[i][j] == '.';

}

void dfs(int i, int j, int n, int m)
{
    s[i][j] = '#';

    if(control(i - 1, j, n, m))
        dfs(i - 1, j, n, m);
    if(control(i + 1, j, n, m))
        dfs(i + 1, j, n, m);
    if(control(i, j - 1, n, m))
        dfs(i, j - 1, n, m);
    if(control(i, j + 1, n, m))
        dfs(i, j + 1, n, m);

}


void solve()
{
    int n, m;
    cin >> n >> m;
    int ans = 0;
    for(int i = 0; i < n; i++)
        cin >> s[i];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(control(i, j, n, m))
            {
                dfs(i, j, n, m);
                ans++;
            }
        }

    }

    cout << ans << "\n";


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
    //cin >> t;
    while (t-- )
    {
        solve();
    }

    return 0;
}
