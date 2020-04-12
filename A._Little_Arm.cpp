#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define pb push_back
//INPUT OUTPUT START
#define in freopen("input.txt","r",stdin);
#define out freopen("output3.txt","w",stdout);
#define harsh in out

int main(){
	#ifndef ONLINE_JUDGE
	harsh
	#endif
	int t;
	cin>>t;
	char c[] = {'B','W'};
	while(t--)
	{
		int n,m,j=0,k=0;
		cin>>n>>m;
		for(int i=0;i<n;i++)
		{
			cout<<'W';
			while(j<m-1)
				{cout<<'B';j++;}
			cout<<endl;
		}
	}
}