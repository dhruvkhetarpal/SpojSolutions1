#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll max(ll a,ll b)
{
	return (a>b)?a:b;
}
ll knap(ll size[],ll val[],ll cap,ll n)
{	ll i,j;
	ll t[n+1][cap+1];
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=cap;j++)
		{
			if(i==0||j==0)
				t[i][j]=0;
			else if(size[i-1]<=j)
				t[i][j]=max(val[i-1]+t[i-1][j-size[i-1]],t[i-1][j]);
			else 
				t[i][j]=t[i-1][j];
		}
	}
	return t[n][cap];
}
int main()
{	ll cap,n,i;
	cin>>cap>>n;
	ll size[n],val[n];
	for(i=0;i<n;i++)
	{	
		cin>>size[i];
		cin>>val[i];

	}
	cout<<knap(size,val,cap,n);
}