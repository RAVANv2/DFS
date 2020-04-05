void dfs(int s, vector<int> g[], bool vis[])
{
  cout<<s<<" ";
  vis[s]=true;

  for(auto i:g)
  {
    if(!vis[i])
    dfs(i,g,vis);
  }

}
