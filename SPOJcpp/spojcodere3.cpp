#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{	ll t,i,j,k,n;
	cin>>t;
	for(i=0;i<t;i++)
	{	ll ans=-1;
		cin>>n;
		ll a[n],c[n]={0},d[n]={0};
		for(j=0;j<n;j++)
		{
			cin>>a[j];
		}
		for(j=0;j<n;j++)
		{
			for(k=0;k<j;k++)
			{
				if(a[j]>a[k])
					c[j]=max(c[j],c[k]+1);
			}
		}
		for(j=n-1;j>=0;j--)
		{
			for(k=n-1;k>j;k--)
			{
				if(a[j]>a[k])
					d[j]=max(d[j],d[k]+1);
			}
		}
		for(j=0;j<n;j++)
		{
			ans=max(ans,c[j]+d[j]+1);
		}
		cout<<ans<<endl;

	}
}