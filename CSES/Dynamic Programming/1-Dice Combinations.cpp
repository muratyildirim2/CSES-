/*

Author: Murat Yıldırım

*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    ll dp[n + 1] = {0};
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    //32
    ll mod = 1000000007;

    for(ll i = 3; i <= n; i++)
    {
        for(ll j = i - 1; j >= i - 6 && j >= 0 ; j--)
        {
            dp[i] += (dp[j]) % mod;
        }
    }
    cout << dp[n] % mod << endl;



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
