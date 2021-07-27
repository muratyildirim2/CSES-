/*

Author: Murat Yıldırım

*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
   const int md=1e9+7;
   
   const int mxN=100;
   const int mxNN=1e+5;
   
   
   void solve()
   {
    int n;
    cin>>n;
  
    int array[mxN];
 
    for(int i=0;i<n;i++)
    {
      cin>>array[i];
 
    }
      
    int dp[mxNN+1];
     memset(dp,0,sizeof(dp));
    vector<int>ans;
    
    dp[0]=1;
    
        for(int i=0;i<n;i++)
        {
            for(int j=mxNN;j;j--)
            {
                 if(j>=array[i])
            dp[j]|=dp[j-array[i]];
                
             }
        }
          
          
            for(int i=1;i<=mxNN;i++)
    {
        if(dp[i])
          ans.push_back(i);
    }
    
    cout<<ans.size()<<"\n";
    
    int t=ans.size();
    
    for(int i=0;i<t;++i)
    cout<<ans[i]<<" ";
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
    ll t=1;
     //cin >> t;


     
     
     
    while (t-- )
    {

      solve(); 

    }

    return 0;
}
