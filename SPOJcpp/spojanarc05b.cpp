#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	for(;;)
	{	ll n,i,m,j,z;
		cin>>n;
		ll a[n+1]={0};
		if(n==0)
			break;
		for(i=1;i<=n;i++)
			cin>>a[i];
		cin>>m;
		ll b[m+1]={0};
		for(i=1;i<=m;i++)
			cin>>b[i];
		i=1;
		j=1;
		while(i<=n||j<=m)
		{
			if(i<=n&&j<=m&&a[i]==b[j])
			{
				a[i]=a[i]+a[i-1];
				b[j]=b[j]+b[j-1];
				z=max(a[i],b[j]);
				a[i++]=z;
				b[j++]=z;
			}
			else if(a[i]<b[j])
			{
				a[i]+=a[i-1];
				i++;
			}
			else if(a[i]>b[j])
			{
				b[j]+=b[j-1];
				j++;
			}
			else if(i>n)
			{
				b[j]+=b[j-1];
				j++;
			}
			else if(j>m) 
			{
				a[i]+=a[i-1];
				i++;
			}
			
		}
		cout<<max(a[n],b[m])<<endl;
	}
}