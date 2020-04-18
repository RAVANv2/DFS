#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl '\n'
#define pb push_back
//INPUT OUTPUT START
#define in freopen("input.txt","r",stdin);
#define out freopen("output.txt","w",stdout);
#define harsh in out

int main(){
	#ifndef ONLINE_JUDGE
	harsh
	#endif
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b;
		cin>>n>>a>>b;
		string s;
		for(int i=0;i<n;i++)
		{
			char ele = 97+(i%b);
			s.push_back(ele);
		}
		cout<<s<<endl;
	}	
}