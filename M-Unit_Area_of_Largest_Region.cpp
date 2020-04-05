#include<bits/stdc++.h>
using namespace std;

int cnt,V,E;
const int N=101;
int adj[N][N];
int vis[N][N];

int x[]={-1,0,1};
int y[]={-1,0,1};


bool isValid(int u,int v)
{
  if(u>=0 && u<V && v>=0 && v<E && adj[u][v])
    return true;
  return false;
}

int DFS(int i,int j,int vis[N][N])
{
  ++cnt;
  vis[i][j]=1;

  for(int r=0;r<3;r++)
  {
    for(int c=0;c<3;c++)
    {
      int u = i+x[r];
      int v = j+y[c];

      if(i == u && j == v) continue;

      if(isValid(u,v) && !vis[u][v])
        DFS(u,v,vis);
    }
  }
  return cnt;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    cin>>V>>E;


    for(int i=0;i<V;i++)
      for(int j=0;j<E;j++)
        cin>>adj[i][j];

    memset(vis,0,sizeof(vis));
    int ans=0;

    for(int i=0;i<V;i++)
    {
      cnt=0;
      for(int j=0;j<E;j++)
      {
        if(adj[i][j] && !(vis[i][j]))
        {
          DFS(i,j,vis);
          ans = max(ans,cnt);
          cnt=0;
        }
      }
    }
    cout<<ans<<endl;
  }
}
