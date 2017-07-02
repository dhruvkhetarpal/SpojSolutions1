#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll sign(ll n)
{
	return n>0?1:0;
}
ll dp(ll n,ll a[])
{	ll i,d[n],j,maxi=-1000;
	for(i=0;i<n;i++)
		d[i]=1;
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(abs(a[j])<abs(a[i]) && d[i]<d[j]+1 && sign(a[j])!=sign(a[i]))
			{
				d[i]=d[j]+1;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		maxi=max(maxi,d[i]);
	}
	return maxi;
}
int main()
{ll n,an,i;
	cin>>n;
	ll a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	an=dp(n,a);
	cout<<an;

}