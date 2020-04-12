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
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n];
		ll b[n];
		for(ll i=0;i<n;i++)
			cin>>a[i];
		for(ll i=0;i<n;i++)
			cin>>b[i];

		if(a[0]==0)
			cout<<"NO";
		if(a[0]!=0)
		{
			for(ll i=0;i<n;i++)
			{
				if(b[i]<0)
				{
					if(a[i]<=0)
					{
						for(ll j=0;j<i;j++)
							if(a[j]==-1)
								cout<<"YES";
							else
								cout<<"NO";
					}
					else
						cout<<"NO";
				}
				else
					cout<<"YES";
			}

		}
	}
}