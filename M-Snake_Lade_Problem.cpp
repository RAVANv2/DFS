#include<bits/stdc++.h>
using namespace std;

int n,a,b;
vector<int> v[31];
int dist[31];
int mp[31];

int bfs(int u)
{
  queue<pair<int,int>> q;
  q.push(make_pair(u,0));
  int vis[31];
  memset(vis,0,sizeof(vis));

  while(!q.empty())
  {
    pair<int,int > p = q.front();
    q.pop();
    if(vis[p.first])
      continue;
    dist[p.first]=p.second;
    vis[p.first]=1;
    if(p.first==30)
      return p.second;

    for(int i=0 ; i<v[p.first].size();i++)
    {
      int ele = v[p.first][i];
      if(!vis[ele])
      {
        if(mp[ele]!=0)
          ele = mp[ele];
        q.push(make_pair(ele,p.second+1));
      }
    }

  }
  return -1;
}




int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    for(int i=0;i<31;i++)
    {
      v[i].clear();
      dist[i]=INT_MAX;
    }
    mp[31]={0};
    cin>>n;
    while(n--)
    {
      cin>>a>>b;
      mp[a]=b;
    }
    for(int i=1;i<=24;i++)
    {
      if(mp[i]!=0)
        v[i].push_back(mp[i]);
      else
        {
          for(int j=i+1;j<=i+6;j++)
            v[i].push_back(j);
        }
    }
    for(int i=25;i<=29;i++)
    {
      if(mp[i]!=0)
        v[i].push_back(mp[i]);
      else
      {
        for(int j=i+1;j<=30;j++)
          v[i].push_back(j);
      }
    }
    // for(auto i:v[29])
    // cout<<i<<" ";


    bfs(1);

    cout<<dist[30]<<endl;

  }
}
