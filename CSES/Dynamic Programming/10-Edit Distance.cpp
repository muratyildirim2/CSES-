/*

Author: Murat Yıldırım

*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
   const int md=1e9+7;
   
   const int mxN=1e6+6;

   
   
   void solve()
   {
       string s1,s2;
       cin>>s1>>s2;
       
       
       int len1=s1.length();
                                
       int len2=s2.length();
       
         int dp[len1+1][len2+1];
       
       for(int i=0;i<=len1;i++)
       {
            for(int j=0;j<=len2;j++)
                   {  
                        if(i==0)
                        {
                            dp[i][j]=j;
                            
                            }
                            
                       else if(j==0)
                        {
                            dp[i][j]=i;
                            
                            }
                            
                            else if(s1[i-1]==s2[j-1])
                            {
                                dp[i][j]=dp[i-1][j-1];
                                }
                                
                                else
                                {
                                
                                dp[i][j]=1+min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]));
                                
                                }
                
                   }
                
       }
       
       
       cout<<dp[len1][len2];
       
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
