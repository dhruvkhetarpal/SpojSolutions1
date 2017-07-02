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
				t[i][j]=max(size[i-1]+t[i-1][j-size[i-1]],t[i-1][j]);
			else 
				t[i][j]=t[i-1][j];
		}
	}
	return t[n][cap];
}
int main()
{	ll te,i,j,n,k,ki;
	cin>>te;
	for(i=0;i<te;i++)
	{
		ll val[10000],size[10000]={0},ar[10000];
		cin>>n>>ki;
		for(j=0;j<n;j++)
		{
			cin>>val[j];
			for(k=0;k<val[j];k++)
			{
				cin>>ar[k];
				size[j]+=ar[k];
			}
		}
		cout<<knap(size,val,ki,n)<<endl;
	}
}