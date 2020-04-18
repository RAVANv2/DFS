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
		ll n;
		cin>>n;
		if(n%2==0)
			cout<<n/2-1<<endl;
		else
			cout<<n/2<<endl;
	}	
}