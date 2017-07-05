#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll maxi(ll a,ll b,ll c)
{
	return max(a,max(b,c));
}
int main()
{	ll t,k,i,j,m,n;
	cin>>t;
	for(k=0;k<t;k++)
	{
		cin>>m>>n;
		ll mi=-1,a[m][n+2]={0};
		for(i=0;i<m;i++)
		{
			for(j=1;j<=n;j++)
			{
				cin>>a[i][j];
			}
		}
		a[0][n+1]=0;
		for(i=1;i<m;i++)
		{
			for(j=1;j<=n;j++)
			{
				a[i][j]+=maxi(a[i-1][j],a[i-1][j-1],a[i-1][j+1]);
			}
		}
		/*for(i=0;i<m;i++)
		{
			for(j=0;j<=n+1;j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}*/

		for(j=1;j<=n;j++)
			mi=max(mi,a[m-1][j]);
		cout<<mi<<endl;
	}
}