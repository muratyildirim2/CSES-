/*

Author: Murat Yıldırım

*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve()
{

    long long int c, n, x;
    cin >> n >> x;

    int mod = 1e9 + 7;

    vector<long long int> coins;

    for(int i = 0; i < n; i++)
    {
        cin >> c;
        coins.push_back(c);
    }

    vector<long long int> dp(x + 1, 0);
    dp[0] = 1;

    for(long long int i = 1; i <= x; i++)
    {
        //dp[i]=INT_MAX;
        for(long long int j = 0; j < n; j++)
        {
            if(i - coins[j] >= 0)
                dp[i] += dp[i - coins[j]];
            dp[i] %= mod;
        }
    }

    cout << dp[x] << endl;

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
