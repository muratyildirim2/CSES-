/*
Author: Murat Yıldırım
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int mxN = 1e3,di[4]={1,0,-1,0},dj[4]={0,-1,0,1};
const char dc[4]= {'D','L','U','R'};
int si, sj, ei, ej,d[mxN][mxN];
string s[mxN];
string p[mxN];
int control(int i, int j, int n, int m)
{

    return i >= 0 && j >= 0 && i < n && j < m && s[i][j] == '.';

}



void solve()
{
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        cin >> s[i];
        for(int j = 0; j < m; ++j)
        {
            if(s[i][j] == 'A')
                si = i, sj = j, s[i][j] = '.';


            if(s[i][j] == 'B')
                ei = i, ej = j, s[i][j] = '.';

        }

          p[i]=string(m,0);
   
    }
    
        
        queue<array<int,2>>qu;
        qu.push({si,sj});
        
        while(qu.size())
        {
            array<int,2>u = qu.front();
            qu.pop(); 
            
            
            for(int k=0;k<4;k++)
            {
            
            int ni=u[0]+di[k];
            int nj =u[1]+dj[k];
            
            
            if(!control(ni,nj,n,m))
            continue;
            qu.push({ni,nj});
            s[ni][nj]='#';
            p[ni][nj]=dc[k];
            d[ni][nj]=k;
            }
        }
        
        if(p[ei][ej])
        {
            cout<<"YES\n";
            
            string temp;
            
            while(ei!=si || ej!=sj)
            {
                
                temp+=p[ei][ej];
                int dd =d[ei][ej]^2;
                ei+=di[dd];
                ej+=dj[dd];
            }
            
            reverse(temp.begin(),temp.end());
            cout<<temp.size()<<"\n";
            cout<<temp;
            
        }
        
        else
        {
        cout<<"NO\n";
        }
        

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
