bool vis[SIZE][SIZE];
int cnt;
int x[] = {-1,0,1};
int y[] = {-1,0,1};

bool isValid(int u,int v,int n,int m,int g[SIZE][SIZE])
{
  if(u>=0 && u<n && v>=0 && v<m && g[u][v])
    return true;
  return false;
}

int dfs(int i,int j,bool vis[SIZE][SIZE],int n,int m,int g[SIZE][SIZE])
{
  cnt++;
  vis[i][j]=1;

  for(int r=0;r<3;r++)
  {
    for(int c=0;c<3;c++)
    {
      int u = i+x[r];
      int v = j+y[c];

    if(i==u && j==v)
      continue;
    if(isValid(u,v,n,m,g) && !vis[i][j])
      dfs(u,v,vis,n,m,g);
    }
  }
  return cnt;
}



int findMaxArea(int n, int m, int g[SIZE][SIZE] )
{
    memset(vis,0,sizeof(vis));
    int ans=0;
    for(int i=0;i<n;i++)
    {
      cnt=0;
      for(int j=0;j<m;j++)
      {
        if(g[i][j] && !vis[i][j])
        {
          cnt=dfs(i,j,vis,n,m,g);
          ans=max(cnt,ans);
          cnt=0;
        }
      }

    }
    cout<<ans<<endl;

}
