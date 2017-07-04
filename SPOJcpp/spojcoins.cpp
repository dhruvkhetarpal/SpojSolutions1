#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
map<ll,ll> a;
ll coin(ll n)
{
	if(n==0)
		return 0;
	if(a[n]==0)
		a[n]=max(n,coin(n/2)+coin(n/3)+coin(n/4));
	return a[n];
}
int main()
{	ll n,i;
	while(scanf("%lld",&n)!=EOF)
	{	
		cout<<coin(n)<<endl;
	}
}