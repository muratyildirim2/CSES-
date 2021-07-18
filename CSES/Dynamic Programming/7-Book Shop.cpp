/*

Author: Murat Yıldırım

*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


const int M = 1e9 + 7, mxN = 10e4;
int dp[mxN + 1];
int n, x;
void solve()
{

    cin >> n >> x;

    vector<int>h(n);
    vector<int>s(n);

    for(int i = 0; i < n; i++)
    {

        cin >> h[i];

    }

    for(int i = 0; i < n; i++)
    {

        cin >> s[i];

    }

    for(int i = 0; i < n; i++)
    {

        for(int j = x; j >= h[i]; --j)
        {
            dp[j] = max(dp[j], dp[j - h[i]] + s[i]);
        }
    }

    cout << dp[x];

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
