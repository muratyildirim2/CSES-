
/*

 Author : Murat Yıldırım

*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll>coins(n);
    vector<ll>dp(x + 1);
    for (ll i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    for (ll i = 0; i <= x; i++)
    {
        dp[i] = INT_MAX;
    }
    dp[0] = 0;
    for (ll i = 1; i <= n; i++)
    {
        for (ll weight = 0; weight <= x; weight++)
        {
            if(weight - coins[i - 1] >= 0)
            {
                dp[weight] = min(dp[weight], dp[weight - coins[i - 1]] + 1);
            }
        }
    }
    cout << (dp[x] == INT_MAX ? -1 : dp[x]) << '\n';


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
