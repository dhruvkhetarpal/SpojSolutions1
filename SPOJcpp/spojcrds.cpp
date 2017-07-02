#include <bits/stdc++.h>
using namespace std;
int main()
{	 long long int  t,i,n,a,c;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n;
		//a=((n%1000007)*((2+((n-1)*3/2))%1000007))%1000007;
		c=(n*(n+1))/2;
		a=(3*c-n)%1000007;
		cout<<a<<endl;
	}
}