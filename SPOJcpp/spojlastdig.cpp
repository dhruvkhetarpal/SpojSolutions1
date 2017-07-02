#include <bits/stdc++.h>
using namespace std;
long long int modexp(int a,int b,int n)
{
	long long int d=1;
	while(b)
	{
		
		if(b%2==1)
			d=(d*a)%n;
		b=b>>1;
		a=(a*a)%n;

	}
	return d;
}
int main()
{	long long int t,i,a,b,ans;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld %lld",&a,&b);
		ans=modexp(a,b,10);
		printf("%lld\n",ans);
	}
}