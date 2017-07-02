#include <bits/stdc++.h>
using namespace std;
int main()
{	long long int n,a,i,c=0;
	cin>>n;
	for(a=1;a<=n;a++)
	{
	for(i=1;i<=sqrt(a);i++)
	{
		if(a%i==0)
			c++;
		/*for(j=sqrt(a);j<=sqrt(a);j++)
		{
			if(i*j==a)
			{
				c++;
				break;
			}
		}*/
	}

	}
	cout<<c;
}