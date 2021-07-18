/*

Author: Murat Yıldırım

*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
     const int mxN=1e6;
        int dp[mxN+1];
            int n;
 
void solve()
{
    cin>>n;
 
    for(int i=1;i<=n;i++)
    {
        dp[i]=1e9;
        int key=i;
        
        while(key)
        {
 
            dp[i]=min(dp[i],dp[i-key%10]+1);
            key/=10;
        }
    }
 
cout<<dp[n];

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
