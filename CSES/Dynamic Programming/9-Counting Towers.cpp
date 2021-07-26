/*

Author: Murat Yıldırım

*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
   const int md=1e9+7;
   
   const int mxN=1e6+6;
   ll dp[mxN][3];

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
    ll t;
     cin >> t;
     
    
    
    dp[1][1]=dp[1][2]=1;
    
    for(ll i=2;i<mxN;i++)
    {
    dp[i][1] = (dp[i-1][1]*4%md + dp[i-1][2])%md;
        dp[i][2] = (dp[i-1][1] + dp[i-1][2]*2%md)%md;
        
        }


     
     
     
    while (t-- )
    {
         ll n;
    cin>>n; 
       
      
 cout<<(dp[n][1] + dp[n][2])%md<<endl; 
       

    }

    return 0;
}
