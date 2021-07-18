/*

Author: Murat Yıldırım

*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


const int M = 1e9 + 7, mxN = 10e3;
string s[mxN];
int dp[mxN][mxN];
int n;
void solve()
{
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    dp[0][0] = 1;
    for(int i = 0; i < n; i++)
    {

        for(int j = 0; j < n; j++)
        {
            if(i)
            {
                dp[i][j] += dp[i - 1][j];
            }

            if(j)
            {
                dp[i][j] += dp[i][j - 1];
            }

            dp[i][j] %= M;


            if(s[i][j] == '*')
            {
                dp[i][j] = 0;
            }

        }

    }

    cout << dp[n - 1][n - 1];

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
